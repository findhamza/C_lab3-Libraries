CC = gcc
LIB = ar rcs
CFLAGS = -L. -I. -lm 
LFLAGS = -Wall -fPIC -shared -O2 -g
LDEPS = sharedlib.h
LOBJ = sharedlib.o
AOBJ = sharedlib.so

OBJ = testb.o

%.o: %.c $(LDEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

sharedlib.so: $(LOBJ)
	$(CC) $(LFLAGS) -o $@ $^

testb: $(OBJ) sharedlib.so
	$(CC) -o $@ $^ $(CFLAGS)
