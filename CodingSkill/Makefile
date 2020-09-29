objects = test.o

c++ = g++
CFLAGS = -std=c++11

test: $(objects)
	c++ $(objects) $(CFLAGS) -o test

test.o: macros.h

.PHONY: clean

clean:
	rm -f $(objects) test
