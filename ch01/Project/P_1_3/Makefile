objects=  main.o test.o

birthdayParadox: $(objects)
	g++ $(objects) -std=c++11 -o birthdayParadox

main.o: test.h
test.o: test.h

.PHONY: clean

clean:
	rm -f birthdayParadox $(objects)
