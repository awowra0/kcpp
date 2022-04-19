#include <iostream>

using namespace std;

void printWA(int *p){
	cout << "\tW " << *p << "\tA " << p << endl;
}

void Funkcja1(){
	int a = 10; int b = 20; int c = 30; int d = 40; int e = 50;
	int *p = &c;
	cout << "Wartości i adresy:" << endl;
	cout << a << "\t" << &a << endl;
	cout << b << "\t" << &b << endl;
	cout << c << "\t" << &c << endl;
	cout << d << "\t" << &d << endl;
	cout << e << "\t" << &e << endl;
	cout << "Wartość *p      " << *p << endl;
	cout << "Operacja p++    "; p++; printWA(p); p--;
	cout << "Operacja ++p    "; ++p; printWA(p); --p;
	cout << "Operacja ++*p   "; ++*p; printWA(p); --*p;
	cout << "Operacja ++(*p) "; ++(*p); printWA(p); --(*p);
	cout << "Operacja ++*(p) "; ++*(p); printWA(p); --*(p);
	cout << "Operacja *p++   "; *p++; printWA(p); *p--;
	cout << "Operacja (*p)++ "; (*p)++; printWA(p); (*p)--;
	cout << "Operacja *(p)++ "; *(p)++; printWA(p); *(p)--;
	cout << "Operacja *++p   "; *++p; printWA(p); *--p;
	cout << "Operacja *(++p) "; *(++p); printWA(p); *(--p);
	cout << endl;
}

void Funkcja2(){ 
	int A[5] = {10,20,30,40,50};
    int *p = A+2;
    cout << "Wartości i adresy:" << endl;
	cout << A[0] << "\t" << &A[0] << endl;
	cout << A[1] << "\t" << &A[1] << endl;
	cout << A[2] << "\t" << &A[2] << endl;
	cout << A[3] << "\t" << &A[3] << endl;
	cout << A[4] << "\t" << &A[4] << endl;
    cout << "Wartość *p      " << *p << endl;
    cout << "Operacja p++    "; p++; printWA(p); p--;
	cout << "Operacja ++p    "; ++p; printWA(p); --p;
	cout << "Operacja ++*p   "; ++*p; printWA(p); --*p;
	cout << "Operacja ++(*p) "; ++(*p); printWA(p); --(*p);
	cout << "Operacja ++*(p) "; ++*(p); printWA(p); --*(p);
	cout << "Operacja *p++   "; *p++; printWA(p); *p--;
	cout << "Operacja (*p)++ "; (*p)++; printWA(p); (*p)--;
	cout << "Operacja *(p)++ "; *(p)++; printWA(p); *(p)--;
	cout << "Operacja *++p   "; *++p; printWA(p); *--p;
	cout << "Operacja *(++p) "; *(++p); printWA(p); *(--p);
	cout << endl;
}


void Funkcja3(){
	int a = 0;
	int b = 0;
	int c = 0;
	int *w = &b;
	int s = &b - &a;

	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
	*w += 10;
	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
	*(w+s) = *w *2;
	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
	*w += *(w+s);
	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
	*(w-s) = 2**(w+s);
	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
	*w += *(w+s);
	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
	*(w+s) += *(w-s);
	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
	*w += *(w+s) - *(w-s);
	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
	*(w-s) *= 2;
	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
	*w += *(w-s) - *(w+s);
	cout << "A, B, C:\t" << a << "\t" << b << "\t" << c << endl;
}

int main(){
	Funkcja1();
	Funkcja2();
	Funkcja3();
}
