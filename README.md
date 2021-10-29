# ProdCons
Producer/Consumer assignment for Operating Systems course:
## 🧐 About <a name = "about"></a>
Producer generates items and put items onto table. Consumer will pick up items. The table can only hold 2 items at the same time. When the table is full, producer will wait. When there are no items, consumer will wait. We use semaphores to synchronize producer and consumer.  Mutual exclusion should be considered. We use pthreads in producer program and consumer program. Shared memory is used for “table”.

## 🏁 Getting Started <a name = "getting_started"></a>
<<<<<<< HEAD
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
3. Exit the program

```
Hit ctrl+c
```

## 🎈 Usage <a name="usage"></a>
This project is an implementation of the producer consumer problem using semaphores and shared memory.

### Example Output
Note: This could vary

```

```
=======
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See [deployment](#deployment) for notes on how to deploy the project on a live system.

### Prerequisites
What things you need to install the software and how to install them.

```
Give examples
```

### Installing
A step by step series of examples that tell you how to get a development env running.

Say what the step will be

```
Give the example
```

And repeat

```
until finished
```

End with an example of getting some data out of the system or using it for a little demo.

## 🔧 Running the tests <a name = "tests"></a>
Explain how to run the automated tests for this system.

### Break down into end to end tests
Explain what these tests test and why

```
Give an example
```

### And coding style tests
Explain what these tests test and why

```
Give an example
```

## 🎈 Usage <a name="usage"></a>
Add notes about how to use the system.
>>>>>>> 134e8d6b3f243f0fa147f65ac05898372e3cc7da
