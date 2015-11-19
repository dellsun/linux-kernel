KVERS = $(shell uname -r)

obj-m := hello.o
#modulename-objs := file1.o file2.o

#EXTRA_CFLAGS = -g -O0

build: kernel_modules

kernel_modules:
	make -C /lib/modules/$(KVERS)/build M=$(CURDIR) modules

clean:
	make -C /lib/modules/$(KVERS)/build M=$(CURDIR) clean
