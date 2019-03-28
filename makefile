CC = gcc
LIB = ar rcs
CFLAGS = -I. 
LFLAGS = -std=gnu59
DEPS = shape_geo.h
OBJ = shape_geo.o
AOBJ = shape_geo.a

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

shape_geo.a: $(OBJ)
	$(LIB) $@ $^

