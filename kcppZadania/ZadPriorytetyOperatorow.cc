#include <iostream>

using namespace std;

int main(){
	int x=1;
	int y=2;
	int z=3;
	int result[]={4,4,4,4};
	result[0] *= -++x*x--+-y--%++z;
	result[1] *= -(++x)*(x--)+-(y--)%(++z);
	result[2] *= (-(++x))*(x--)+(-(y--))%(++z);
	result[3] *= ((-(++x))*(x--))+((-(y--))%(++z));
	cout << result[0] << endl;
	cout << result[1] << endl;
	cout << result[2] << endl;
	cout << result[3] << endl;
	return 0;
}
