#include <iostream>
#include <typeinfo>

using namespace std;

typedef long long llint;
typedef double lf;

int fun2();//funkcja za main()

int fun1(){
	//static int iR = 0;
	return 0;
}


int main(){
	/*auto fVarA = 7;
	auto fVarB = 8.4;
	int fVarC = 9;
	float fVarD = 9.3;
	cout << fVarA << typeid(fVarA).name() << "\t" << sizeof(fVarA) << "\t" << endl;*/
	/*cout << fVarB << endl;
	cout << fVarC << endl;
	cout << fVarD << endl;*/
	cout << fun1() << endl;
	cout << fun2() << endl;
	llint llA = 10;
	cout << llA << endl;
	lf fVarG = 5.9;
	cout << fVarG << endl;
	return 0;
}

int fun2(){
	return 2;
}
