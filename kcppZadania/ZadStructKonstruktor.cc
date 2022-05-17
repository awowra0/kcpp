#include <iostream>

using namespace std;

struct S{
	int x, y;
	double z;
	S(){
		x = 0; y = 0; z = 0;
	}
	S(int a){
		x = a; y = 0; z = 0;
	}
	S(int a, int b){
		x = a; y = b; z = 0;
	}
	S(int a, int b, double c) : x(a), y(b), z(c){}
	~S(){
		cout << "S will be deleted." << endl;
	}
	void print(){
		cout << x << " " << y << " " << z << endl;
	}
};


int main(){
	S *s1 = new S;
	S s2(2),s3(3,3),s4(1,2,3.4);
	s1->print();
	s2.print();
	delete s1;
	s3.print();
	s4.print();
	return 0;
}
