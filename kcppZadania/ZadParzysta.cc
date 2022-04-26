#include <iostream>

using namespace std;

void funA(int num){
	if (num & 1 == 1) cout << "Liczba nieparzysta" << endl;
	else cout << "Liczba parzysta" << endl;
}
/*
1 & 1 = 1,
1 & 0 = 0,
0 & 1 = 0,
0 & 0 = 0 

34 & 1
0b100010 & 0b000001
	  10 0010
	& 00 0001
	  == ====
	  00 0000
34 & 1 = 0
*/

void funB(int num){
	if (num % 2 != 0) cout << "Liczba nieparzysta" << endl;
	else cout << "Liczba parzysta" << endl;
}

void funC(int num){
	num % 2 != 0  ? 	cout << "Liczba nieparzysta" << endl : cout << "Liczba parzysta" << endl;
}

int main(){
	int num;
	cout << "Podaj liczbę całkowitą:" << endl;
	cin >> num;
	funA(num);
	funB(num);
	funC(num);
	return 0;
}
