CC = gcc
CFLAG=-I.
DEPS = fibonacci.h
OBJ = main.o fibonacci.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

fib: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
