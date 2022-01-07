CC = gcc
CFLAGS = -g -fsanitize=adress -static-libasan

all : memorycorruption

%.o : %.c
	$(CC) $(CFLAGS) -o $^

clean:
	rm -rf *.o memorycorruption
