
#include <iostream>

using namespace std;

void funA(int num){
	if (num & 1 == 1) cout << "Liczba " << num << " jest nieparzysta" << endl;
	else cout << "Liczba " << num << " jest parzysta" << endl;
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
	if (num % 2 == 1) cout << "Liczba " << num << " jest nieparzysta" << endl;
	else cout << "Liczba " << num << " jest parzysta" << endl;
}

void funC(int num){
	num % 2 == 1 ? 	cout << "Liczba " << num << " jest nieparzysta" << endl : cout << "Liczba " << num << " jest parzysta" << endl;
}

int main(){
	int num;
	cout << "Podaj liczbę całkowitą:" << endl;
	cin >> num;
	char c = '\0';
	while (c == '\0'){
		cout << "Podaj numer funkcji: 1,2 lub 3." << endl;
		cin >> c;
		switch(c){
			case '1':
				funA(num);
				break;
			case '2':
				funB(num);
				break;
			case '3':
				funC(num);
				break;
			default:
				cout << "Nieprawidłowy numer." << endl;
				c = '\0';
		}
	}
	return 0;
}
