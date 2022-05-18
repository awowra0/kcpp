#include <iostream>

using namespace std;

class A{
	public:
		int sumaA(A &a){return a.i1 + a.i2;}
		//float sumaB(B &b){return b.f1 + b.f2;}
		friend class B;

	private:
		int i1 = 1;
		int i2 = 2;
};

class B{
	public:
		int sumaA(A &a){return a.i1 + a.i2;}
		float sumaB(B &b){return b.f1 + b.f2;}
		//friend class A;
	private:
		float f1 = 1.5;
		float f2 = 2.3;
};


int main(){
	A a;
	B b;
	cout << a.sumaA(a) << endl;
	cout << b.sumaB(b) << endl;
	cout << b.sumaA(a) << endl;
	//cout << a.sumaB(b) << endl;
	return 0;
}
