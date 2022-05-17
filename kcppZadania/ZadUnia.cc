#include <iostream>

using namespace std;

union myunion{
	double d;
	float f[2];
	long long l;
	int i[2];
	short s[4];
	char c[8];
};

void print(myunion u){
	cout << u.d << endl;
	cout << u.f[0] << " " << u.f[1] << endl;
	cout << u.l << endl;
	cout << u.i[0] << " " << u.i[1] << endl;
	cout << u.s[0] << " " << u.s[1] << " " << u.s[2] << " " << u.s[3] << endl;
	for (int i=0; i<8; i++) cout << static_cast<short>(u.c[i]) << " ";
	cout << endl << endl;
}

int main(){
	myunion u;
	u.d = 45.4215;
	print(u);
	u.f[0] = 45.4215;
	u.f[1] = 0;
	print(u);
	u.s[0]++;
	print(u);
	u.d++;
	print(u);
}
