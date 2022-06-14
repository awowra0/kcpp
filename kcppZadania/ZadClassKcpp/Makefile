main: ZadPrzekazywanieTablic.o ZadArytmetykaWskaznikow.o ZadAdresowaniePamieci.o ZadParzysta.o ZadUnia.o ZadKcpp.o main.o
	g++ main.o ZadPrzekazywanieTablic.o ZadArytmetykaWskaznikow.o ZadKcpp.o ZadAdresowaniePamieci.o ZadParzysta.o ZadUnia.o -o main
	rm -rf *.o

ZadPrzekazywanieTablic.o: src/ZadPrzekazywanieTablicZPodaniemRozmiaru.cc
	g++ -c src/ZadPrzekazywanieTablicZPodaniemRozmiaru.cc -I./include -o ZadPrzekazywanieTablic.o

ZadAdresowaniePamieci.o: src/ZadAdresowaniePamieci.cc
	g++ -c src/ZadAdresowaniePamieci.cc -I./include -o ZadAdresowaniePamieci.o

ZadParzysta.o: src/ZadParzysta.cc
	g++ -c src/ZadParzysta.cc -I./include -o ZadParzysta.o

ZadUnia.o: src/ZadUnia.cc
	g++ -c src/ZadUnia.cc -I./include -o ZadUnia.o

ZadKcpp.o: src/ZadKcpp.cc
	g++ -c src/ZadKcpp.cc -I./include -o ZadKcpp.o

ZadArytmetykaWskaznikow.o: src/ZadArytmetykaWskaznikow.cc
	g++ -c src/ZadArytmetykaWskaznikow.cc -I./include -o ZadArytmetykaWskaznikow.o

main.o: main.cc
	g++ -c main.cc -I./include -o main.o

clean:
	rm -rf *.o

cleanall:
	rm -rf *.o
	rm -rf main
