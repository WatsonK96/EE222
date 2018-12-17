CC = gcc
CFLAG=-I.
DEPS = swaphalf.h
OBJ = driver.o swaphalf.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

swap: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *.a tt
