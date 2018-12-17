CC = gcc
CFLAG=-I.
DEPS = tt.h
OBJ = tt_driver.o tt.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tt: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *.a tt