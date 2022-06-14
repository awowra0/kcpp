#include <iostream>
#include "ZadKcpp.h"

void M::Metoda22(){
	M22 *mm22 = new M22;
	delete mm22;
}
void M::Metoda31(){
	M31 *mm31 = new M31;
	delete mm31;
}
void M::Metoda33(){
	M33 *mm33 = new M33;
	delete mm33;
}
void M::Metoda43(){
	M43 *mm43 = new M43;
	delete mm43;
}
void M::Metoda53(){
	M53 *mm53 = new M53;
	delete mm53;
}
int M::run(){
	char c = 0;
	while(c != '0'){
		cout << "\nWybierz sekcję:\n1 - Funkcja main\n2 - Zwracanie przez funkcje\n3 - Arytmetyka wskaźników\n4 - Operacje wejścia/wyjścia \n5 - Klasy\n0 - Wyjście." << endl;
		cin  >> c;
		switch(c){
			case '1':
				cout << "Wybrano sekcję 1. Brak gotowych funkcji." << endl;
				break;
			case '2':
				cout << "Wybrano sekcję 2." << endl;
				while(c != '0' && c != 0){
					cout << "\nWybierz funkcję:\n2 - Przekazywanie tablic,\nB - Powrót do wyboru sekcji,\n0 - Wyjście." << endl;
					cin >> c;
					switch(c){
						case '2':
							cout << "Wybrano funkcję 2 - aprzykład przekazywania tablic." << endl;
							M::Metoda22();
							break;
						case 'B':
							c = 0;
							break;
						case '0':
							cout << "Wyjście z programu." << endl;
							break;
					}		
				}
				break;
			case '3':
				cout << "Wybrano sekcję 3." << endl;
				while(c != '0' && c != 0){
					cout << "\nWybierz funkcję:\n1 - Kierunek adresowania pamięci,\n3 - Arytmetyka wskaźników,\nB - Powrót do wyboru sekcji,\n0 - Wyjście." << endl;
					cin >> c;
					switch(c){
						case '1':
							cout << "Wybrano funkcję 1 - adresowanie pamięci." << endl;
							M::Metoda31();
							break;
						case '3':
							cout << "Wybrano funkcję 3 - opis arytmetyki wskaźników." << endl;
							M::Metoda33();
							break;
						case 'B':
							c = 0;
							break;
						case '0':
							cout << "Wyjście z programu." << endl;
							break;
					}		
				}
				break;
			case '4':
				cout << "Wybrano sekcję 4." << endl;
				while(c != '0' && c != 0){
					cout << "\nWybierz funkcję:\n3 - Parzystość liczby,\nB - Powrót do wyboru sekcji,\n0 - Wyjście." << endl;
					cin >> c;
					switch(c){
						case '3':
							cout << "Wybrano funkcję 3 - sprawdzanie parzystość liczby." << endl;
							M::Metoda43();
							break;
						case 'B':
							c = 0;
							break;
						case '0':
							cout << "Wyjście z programu." << endl;
							break;
					}		
				}
				break;
			case '5':
				cout << "Wybrano sekcję 5." << endl;
				while(c != '0' && c != 0){
					cout << "\nWybierz funkcję:\n3 - Działanie unii,\nB - Powrót do wyboru sekcji,\n0 - Wyjście." << endl;
					cin >> c;
					switch(c){
						case '3':
							cout << "Wybrano funkcję 3 - przykład unii." << endl;
							M::Metoda53();
							break;
						case 'B':
							c = 0;
							break;
						case '0':
							cout << "Wyjście z programu." << endl;
							break;
					}		
				}
				break;
			case '0':
				cout << "Wyjście z programu." << endl;
				break;
		}
	}
	return 0;
}
