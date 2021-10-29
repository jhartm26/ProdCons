# ProdCons
Producer/Consumer assignment for Operating Systems course:
## 🧐 About <a name = "about"></a>
Producer generates items and put items onto table. Consumer will pick up items. The table can only hold 2 items at the same time. When the table is full, producer will wait. When there are no items, consumer will wait. We use semaphores to synchronize producer and consumer.  Mutual exclusion should be considered. We use pthreads in producer program and consumer program. Shared memory is used for “table”.

## 🏁 Getting Started <a name = "getting_started"></a>
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

## 🎈 Usage <a name="usage"></a>
This project is an implementation of the producer consumer problem using semaphores and shared memory.

### Example Output
Note: This could vary
<img width=200px height=200px src="file:///home/hartm/Pictures/ExampleOutput.png">
