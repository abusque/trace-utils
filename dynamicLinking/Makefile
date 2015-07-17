CC = gcc
CFLAGS = -Wall -g

all: libhello.so main.out

libhello.so: libhello.o tp.o
	$(CC) -shared $(CFLAGS) -llttng-ust -ldl -Wl,-soname,libhello.so -o $@ $?

libhello.o: libhello.c
	$(CC) $(CFLAGS) -fPIC -c -o $@ $<

tp.o: tp.c
	$(CC) $(CFLAGS) -fPIC -c -I. -o $@ $<

tp2.o: tp2.c
	$(CC) $(CFLAGS) -c -I. -o $@ $<

utils.o: utils.c
	$(CC) $(CFLAGS) -c -I. -o $@ $<

main.o: main.c
	$(CC) $(CFLAGS) -c -I. -o $@ $<

main.out: main.o utils.o tp2.o
	$(CC) $(CFLAGS) -llttng-ust -ldl -o $@ $?

.PHONY: clean
clean:
	rm -f *.o *.so main.out
