#include <iostream>
#include <string>

using namespace std;

#define INT_A 10
#define concat(int1, int2) int1 ## int2 << #int1 << #int2 << " " << int1 << " " << int2 << endl;


void funA2(){
	int num = 0;
	int int_b = 10;
	if (int_b) num += int_b;
	if (!int_b) num += 100;
	cout << num << endl;
}

void funB2(){
	int c = 123;
	int out = 456;
	cout << "cout " << c << " " << out << endl;
}

void funB(){
	int c = 123;
	int out = 456;
	concat(c, out);
}


void funA(){
	int num = 0;
#ifdef INT_A
	num += INT_A;
#endif

#ifndef INT_A
	num += 100;
#endif
	cout << num << endl;
}

int main(){
	funA();
	funB();
	cout << endl;
	funA2();
	funB2();
}
