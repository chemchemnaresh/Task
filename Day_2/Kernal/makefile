PWD := $(shell pwd)
obj-m += inputdriver.o

all:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD)

clean:
	make -C /lib/modules/$(shell uname -r)/build/ m=$(PWD) clean
