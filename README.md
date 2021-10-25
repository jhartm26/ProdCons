# ProdCons
Producer/Consumer assignment for Operating Systems course:
Producer generates items and put items onto table. Consumer will pick up items. The table can only hold 2 items at the same time. When the table is full, producer will wait. When there are no items, consumer will wait. We use semaphores to synchronize producer and consumer.  Mutual exclusion should be considered. We use pthreads in producer program and consumer program. Shared memory is used for “table”.
