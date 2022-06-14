#include <iostream>
#include "ZadUnia.h"

using namespace std;



void M53::print(myunion u){
	cout << "Double: " << u.d << endl;
	cout << "Float: " << u.f[0] << " " << u.f[1] << endl;
	cout << "Long: " << u.l << endl;
	cout << "Int: " << u.i[0] << " " << u.i[1] << endl;
	cout << "Short: " << u.s[0] << " " << u.s[1] << " " << u.s[2] << " " << u.s[3] << endl;
	cout << "Char: ";
	for (int i=0; i<8; i++) cout << static_cast<short>(u.c[i]) << " ";
	cout << endl << endl;
}

int M53::main(){
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
	return 0;
}
