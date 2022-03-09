#include <iostream>

using namespace std;

namespace myname{
	double k = 3.14;
}

enum alfa{
	a=1,b,c,d
};

int main(){
	/*alfa mychar = b;
	cout << "a " << a << endl;
	cout << "b " << b << endl;
	cout << "c " << c << endl;
	cout << "d " << d << endl;
	cout << "mychar " << mychar << endl;*/

	double d = 3.14;
	int k = (int)d; //C converse
	int kk = static_cast<int>(d); //C++ converse
	cout << d << endl;
	cout << k << endl;
	cout << kk << endl;
	cout << myname::k << endl;
}
