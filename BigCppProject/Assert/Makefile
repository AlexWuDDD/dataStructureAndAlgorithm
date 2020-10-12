objects = test.o

CXX = g++

CXXFLAGS += -std=c++11 -DNDEBUG

TARGETS = test

all: $(TARGETS)

test: $(objects)
	$(CXX) $(objects) $(CXXFLAGS) -o test

test.o:

.PHONY: clean

clean:
	rm -f $(objects) $(TARGETS)
