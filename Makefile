#usage derived from https://www.youtube.com/watch?v=cFNbcV5TOfI
all:  main.out

main: main.out
	./main.out

main.out:
	g++ main.cpp -o main.out

test: test.cpp
	./tests/test.out
	rm -f test.out
test.cpp:
	g++ ./tests/test1.cpp -o ./tests/test.out

clean:
	rm -f *.exe
	rm -f *.out