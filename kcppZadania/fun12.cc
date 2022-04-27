#include <iostream>

using namespace std;

void f1(int i){
	if (i & 1) cout << "Nieparzysta" << endl;
	else cout << "Parzysta" << endl;
}

void f2(int i){
	if (i % 2) cout << "Nieparzysta" << endl;
	else cout << "Parzysta" << endl;
}

void f3(int i){
	(i & 1) ? cout << "Nieparzysta" << endl : cout << "Parzysta" << endl;
}

int main(){
	int i;
	cout << "Podaj liczbę: " << endl;
	cin >> i;
	f1(i);f2(i);f3(i);
	/*char c;
	cout << "Wybierz funkcję 1,2 lub 3: " << endl;
	cin >> c;
	switch(c){
		case '1':
			cout << "Wybrano &" << endl;
			f1(i);
			break;
		case '2':
			cout << "Wybrano %" << endl;
                        f2(i);
                        break;
		case '3':
			cout << "Wybrano operator warunkowy" << endl;
                        f3(i);
                        break;
		default:
			cout << "Nie wybrano żadnej funkcji" << endl;
	}*/
	return 0;
}
