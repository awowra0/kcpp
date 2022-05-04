#include <iostream>

using namespace std;

struct mystruct{
	int i1;
	int i2 = 4;
	float f1;
	double lf1 = 4.5;

	//mystruct(int ii2, float ff1): i2(ii2), f1(ff1)
};

union intb{
	int i;
	float f;
	double lf;
	char c;
};

int main(){
	mystruct ms1;
	ms1.i1 = 7;
	ms1.f1 = 3.1f;
	cout << ms1.i1+ms1.i2 << "\t" << ms1.f1+ms1.lf1 << endl;
	//mystruct ms2(3,6.4f);
	//cout << ms2.i1+ms2.i2 << "\t" << ms2.f1+ms2.lf1 << endl;
	intb un;
	un.i = 40;
	cout << un.lf << "\t" << un.f << "\t" << un.i << "\t" << un.c << endl;
}
