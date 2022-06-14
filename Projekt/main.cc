#include "Battleships.h"

int main(){
	Battleships *game = new Battleships;
	return 0;
}
//kompilacja: 
//"g++ -c Battleships.cc -lncurses -o Battleships.o"
//"g++ -c main.cc -lncurses -o main.o"
//"g++ main.o Battleships.o -lncurses -o main"
