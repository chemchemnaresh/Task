CC = gcc
CFLAGS = -g -fsanitize=address -static-libasan

 
 all : memoryleak

%.o : %.c
	$(CC) $(CFLAGS) -o $^

clean:
	rm -rf *.o memoryleak
