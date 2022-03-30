#include <iostream>

using namespace std;

int fun1(int a){
	return a;
}
&int fun2(int &a){
	return a;
}
*int fun3(int *a){
	return *a;
}
int[] fun4(int tab[]){
	return tab[];
}

int main(){ /// Przekazywanie parametrów
	int c = 10;
	int *wsk = &c;
	int tab[2]={c,c};
	cout << fun1(c) << endl;
	cout << fun2(c) << endl;
	cout << fun3(wsk) << endl;
	cout << fun4(tab) << endl;
	return 0;
}
