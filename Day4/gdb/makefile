CC = gcc
CFLAGS = -g -fsanitize=address -static-libasan

   all : prog

%.o : %.c
	$(CC) $(CFLAGS) -o $^

clean:
	rm -rf *.o prog
