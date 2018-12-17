CC = gcc
CFLAG=-I.
DEPS = matrix.h
OBJ = driver.o matrix.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

matrix: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *.a tt
