CC = gcc
LIB = ar rcs
CFLAGS = -L. -I. -lm
LFLAGS = -Wall -fPIC -shared -O2 -g
LDEPS = dynamiclib.h
LOBJ = dynamiclib.o
AOBJ = dynamiclib.so

OBJ = testa.o

%.o: %.c $(LDEPS)
	$(CC) $(LFLAGS) -c -o $@ $< $(CFLAGS)

dynamiclib.so: $(LOBJ)
	$(CC) $(LFLAGS) -o $@ $^ -lm

testa: $(OBJ) dynamiclib.so
	$(CC) -o $@ $^ $(CFLAGS) -ldl
