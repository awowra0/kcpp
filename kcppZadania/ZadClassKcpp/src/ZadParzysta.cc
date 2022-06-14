#include <iostream>
#include "ZadParzysta.h"

using namespace std;

void M43::funA(int num){
	if (num & 1 == 1) cout << "Liczba nieparzysta" << endl;
	else cout << "Liczba parzysta" << endl;
}

void M43::funB(int num){
	if (num % 2 != 0) cout << "Liczba nieparzysta" << endl;
	else cout << "Liczba parzysta" << endl;
}

void M43::funC(int num){
	num % 2 != 0  ? cout << "Liczba nieparzysta" << endl : cout << "Liczba parzysta" << endl;
}

int M43::main(){
	int num;
	cout << "Podaj liczbę całkowitą:" << endl;
	cin >> num;
	funA(num);
	funB(num);
	funC(num);
	return 0;
}
