objects1 = producer.o
objects2 = customer.o

CXX = g++
CXXFALGS = -std=c++11
LDFLAGS = -lrt

TARGETS = producer customer

all: $(TARGETS)

producer: $(objects1)
	$(CXX) $(objects1) $(CXXFALGS) -o producer $(LDFLAGS)

customer: $(objects2)
	$(CXX) $(objects2) $(CXXFALGS) -o customer $(LDFLAGS)
	
producer.o:
customer.o:

.PHONY: clean
clean:
	rm -r $(objects1) $(objects2) producer customer
