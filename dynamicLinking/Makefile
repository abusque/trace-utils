CC = gcc
CFLAGS = -Wall -g

all: libhello.so main.out

libhello.so: libhello.o tp.o
	$(CC) -shared $(CFLAGS) -llttng-ust -ldl -Wl,-soname,libhello.so -o $@ $?

libhello.o: libhello.c
	$(CC) $(CFLAGS) -fPIC -c -o $@ $<

tp.o: tp.c
	$(CC) $(CFLAGS) -fPIC -c -I. -o $@ $<

main.out: main.c
	$(CC) $(CFLAGS) -ldl -o $@ $<

.PHONY: clean
clean:
	rm -f *.o *.so main.out
