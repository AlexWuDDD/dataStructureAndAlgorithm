objects = a.o

cc = gcc
CFLAGS = -g -O0

a: $(objects)
	cc $(objects) $(CFLAGS) -o a

a.o:

.PHONY: clean

clean:
	rm -f $(objects) a
