CC = gcc
LIB = ar rcs
CFLAGS = -L. -I. -lm 
LFLAGS = -Wall -fPIC -shared -O2 -g
LDEPS = dynamiclib.h
LOBJ = dynamiclib.o
AOBJ = dynamiclib.so

OBJ = testa.o

%.o: %.c $(LDEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

dynamiclib.so: $(LOBJ)
	$(CC) $(LFLAGS) -o $@ $^

testa: $(OBJ) dynamiclib.so
	$(CC) -o $@ $^ $(CFLAGS)
