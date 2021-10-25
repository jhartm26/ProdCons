#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <semaphore.h>

int main() {
    int tbl = shm_open("table", O_CREAT | O_RDWR, 0666);
    ftruncate(tbl,sizeof(int));
    int* table = mmap(0, sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, tbl, 0);

    sem_t* fill = sem_open("fill", O_CREAT, 0666, 0);
    sem_t* empty = sem_open("empty", O_CREAT, 0666, 2);
    sem_t* mutex = sem_open("mutex", O_CREAT, 0666, 1);


    int loop = 20;
    printf("\nProducer ready to create %d items.\n", loop);

    for(int i = 1; i < loop; ++i) {
        sem_wait(empty);

        int ms = rand() % 2 + 1;
        sleep(ms);

        sem_wait(mutex);
        ++(*table);
        sem_post(mutex);

        printf("Item produced, there are now %d item(s) in the table.\n", *table);

        sem_post(fill);
    }


    sem_close(fill);
    sem_close(empty);
    sem_close(mutex);

    sem_unlink("fill");
    sem_unlink("empty");
    sem_unlink("mutex");

    munmap(table, sizeof(int));
    close(tbl);
    shm_unlink("table");

    printf("Producer cleaned up!\n");
    return 0;
}