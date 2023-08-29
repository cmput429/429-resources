CCLOC= ../arm-gem5-linux-gnueabi/bin/
CC = $(CCLOC)arm-gem5-linux-gnueabi-gcc
CPP = $(CCLOC)arm-gem5-linux-gnueabi-g++
OPTS = -g -O3 -march=armv7-a -marm

all: hashmark-local.arm hashmark-global.arm hashmark-nolocks.arm

hashmark-local.arm: front.o hash-local.o pthread.o
	$(CPP) $(OPTS) -static -o hashmark-local.arm front.o hash-local.o pthread.o

hashmark-global.arm: front.o hash-global.o pthread.o
	$(CPP) $(OPTS) -static -o hashmark-global.arm front.o hash-global.o pthread.o

hashmark-nolocks.arm: front.o hash-nolocks.o pthread.o
	$(CPP) $(OPTS) -static -o hashmark-nolocks.arm front.o hash-nolocks.o pthread.o

clean:
	-rm *.o *.arm

hash-local.o: hash.h hash.c
	$(CC) $(OPTS) -DMUTEX -DLOCAL -std=gnu99 -o hash-local.o -c hash.c

hash-global.o: hash.h hash.c
	$(CC) $(OPTS) -DMUTEX -DGLOBAL -std=gnu99 -o hash-global.o -c hash.c

hash-nolocks.o: hash.h hash.c
	$(CC) $(OPTS) -DMUTEX -std=gnu99 -o hash-nolocks.o -c hash.c

front.o: front.h front.c
	$(CC) $(OPTS) -std=gnu99 -c front.c

pthread.o:
	$(CC) $(OPTS) -c m5threads/pthread.c -o pthread.o
