#include <iostream>

using namespace std;

int main(){
	int a = 13;
	int b = 21;
	int c = 39;
	cout << "Adres a: " << &a << ", wartość a: " << a << endl;
	cout << "Adres b: " << &b << ", wartość b: " << b << endl;
	cout << "Adres c: " << &c << ", wartość c: " << c << endl;
	// Zmienne mają kolejne rosnące (malejące) adresy, różniące się o rozmiar typu zmiennych.
	return 0;
}
