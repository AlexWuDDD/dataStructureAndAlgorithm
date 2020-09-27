objects = main.o test.o

printCalendar : $(objects)
	g++ $(objects) -std=c++11 -o printCalendar

main.o: test.h
test.o: test.h

.PHONY: clean
clean:
	rm printCalendar $(objects)
