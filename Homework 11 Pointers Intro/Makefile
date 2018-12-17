CC = gcc
CFLAG=-I.
DEPS = pointers.h
OBJ = main.o pointers.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pointers: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *.a tt
