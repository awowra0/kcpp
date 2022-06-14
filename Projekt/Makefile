main: main.o Battleships.o
	g++ main.o Battleships.o -I./include -lncurses -o main
	rm main.o Battleships.o

main.o: main.cc
	g++ -c main.cc -I./include -lncurses -o main.o

Battleships.o: src/Battleships.cc
	g++ -c src/Battleships.cc -I./include -lncurses -o Battleships.o

clean:
	rm -f *.o

cleanall:
	rm -f *.o
	rm -f main
