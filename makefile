CC = gcc
LIB = ar rcs
CFLAGS = -L. -I. -lm 
LFLAGS = -std=gnu59
LDEPS = shape_geo.h
LOBJ = shape_geo.o
AOBJ = shape_geo.a

OBJ = main.o

%.o: %.c $(LDEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

shape_geo.a: $(LOBJ)
	$(LIB) $@ $^

main: $(OBJ) shape_geo.a
	$(CC) -o $@ $^ $(CFLAGS)
