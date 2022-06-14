# Gra w statki

### Wymagane biblioteki:
ncurses

### Kompilacja:
make
##### Lub
g++ -c Battleships.cc -lncurses -o Battleships.o
g++ -c main.cc -lncurses -o main.o
g++ main.o Battleships.o -lncurses -o main
