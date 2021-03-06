# ProdCons
Producer/Consumer assignment for Operating Systems course:
## π§ About <a name = "about"></a>
Producer generates items and put items onto table. Consumer will pick up items. The table can only hold 2 items at the same time. When the table is full, producer will wait. When there are no items, consumer will wait. We use semaphores to synchronize producer and consumer.  Mutual exclusion should be considered. We use pthreads in producer program and consumer program. Shared memory is used for βtableβ.

## π Getting Started <a name = "getting_started"></a>
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites
gcc and pthread library.
Compiled on Ubuntu 20.04

Test for gcc version
```
gcc --version
```
Installing gcc if not already installed
```
sudo apt update
sudo apt install build-essential
```
Confirming gcc installation
```
gcc --version
```

### Installing
1. Clone the Repository

```
git clone https://github.com/jhartm26/ProdCons.git
```
2. Compile and run the program

```
gcc producer.c -pthread -lrt -o producer
gcc consumer.c -pthread -lrt -o consumer
./producer & ./consumer &
```
3. Exit the program after receiving results

```
Hit ctrl+c
```

## π Usage <a name="usage"></a>
This project is an implementation of the producer consumer problem using semaphores and shared memory.

### Example Output
Note: This could vary. Additionally, though I couldn't figure it out after a bunch of times running the program it will begin to fail, if you could figure it out be sure to note down during grading, much appreciated.

![ExampleOutput](https://user-images.githubusercontent.com/90359108/139364242-21476c10-9e37-457a-a6c1-3c1562c1445a.png)

