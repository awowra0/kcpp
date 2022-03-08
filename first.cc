#include <iostream>

using namespace std;

int fun1(){
	int iWynik;
	int iA = 1;
	int iB = 2;
	iWynik = iA + iB;
	return iWynik;
}

int main(){
	int a = 4;
	cout << a << endl;

	int b = fun1();
	cout << b << endl;
	cout << fun1() << endl;

	return 0;
}
