#include <iostream>

using namespace std;

int main(){
	int a = 20;
	int b = 30;
	int c = 40;
	int *wsk = &a;
	cout << &a << " " << &b << " " << &c << endl;

	cout << &b+1 << endl;
	cout << wsk+1 << endl;
	cout << &wsk << endl;
	cout << *wsk++ << " "<< *wsk << " " << *++wsk << endl;

	int x = &b - &a;
	cout << x << " " << *(&a + x) << endl;
}
