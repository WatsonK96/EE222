CC = gcc
CFLAG=-I.-lm
DEPS = stat_lib.h
OBJ = stat_driver.o stat_lib.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

stat_make: $(OBJ)
	$(CC) -o $@ $^ -lm $(CFLAGS)

