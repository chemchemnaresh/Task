all: spinlock

spinlock: spinlock.c
	gcc -g -O0 -o spinlock spinlock.c -lpthread

clean:
	rm -rf *.o spinlock
