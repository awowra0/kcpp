#include <iostream>
#include <string>

using namespace std;


void funA(int num){
	if (num & 1 == 1) cout << "Liczba " << num << " jest nieparzysta" << endl;
	else cout << "Liczba " << num << " jest parzysta" << endl;
}

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
	string str;
	cout << "Podaj nazwę funkcji [funA || funB || funC]:" << endl;
	cin >> str;
	if (str.length() < 4){
		cout << "Za krótka nazwa funkcji." << endl;
		return 1;
	}
	switch(str[0]){
		case 'F':
		case 'f':
			switch(str[1]){
				case 'U':
				case 'u':
					switch(str[2]){
						case 'N':
						case 'n':
							switch(str[3]){
								case 'A':
								case 'a':
									funA(num);
									break;
								case 'B':
								case 'b':
									funB(num);
									break;
								case 'C':
								case 'c':
									funC(num);
									break;
								default:
									cout << "Nie znaleziono funkcji." << endl;
									return 1;
							}
							break;
						default:
							cout << "Nie znaleziono funkcji." << endl;
							return 1;
					}
					break;
				default:
					cout << "Nie znaleziono funkcji." << endl;
					return 1;
			}
			break;
		default:
			cout << "Nie znaleziono funkcji." << endl;
			return 1;
	}
	return 0;
}
