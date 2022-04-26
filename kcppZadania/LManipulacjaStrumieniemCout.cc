#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double a = 1.0/7.0;
	double b = 1031.0/99.0;

	cout << "Wynik naszego działania: " << fixed << setprecision(5) << a << " jest niepoprawny, ale:" << endl;
	cout << setw(12) << "output: "<< setw(8) << setprecision(3) << b << setw(6) <<"T: " << setw(6) << a << endl;
	cout << setw(12) << "output1:"<< setw(8) << setprecision(4) << a << setw(6) <<"T: " << setw(6) << setprecision(5) << b << endl;
	cout << setw(12) << "output2:"<< setw(8) << setprecision(4) << a << setw(6) <<"T: " << setw(6) << setprecision(6) << b << endl;
	cout << setw(4) << "" << setfill('-') << setw(32) << "" << setfill(' ') << endl;
	cout << setw(12) << "average:"<< setw(8) << setprecision(4) << b << setw(6) <<"T: " << setw(6) << setprecision(6) << b << endl;

}
