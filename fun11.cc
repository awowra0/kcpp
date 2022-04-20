#include <iostream>
#include <iomanip>

using namespace std;



int main(){
	cout << setw(14) << "C" << setw(25) << "C++" << "\n" << endl;
	cout << setw(20) << "printf(char) " << "\t" << "std::cout << string << endl" << "\n" <<endl;
	cout << setw(20) << "scanf(%type, &var) " << "\t" << "std::cin >> var" << "\n" << endl;
	cout << setw(20) << "(type)var" << "\t" << "static_cast<type>(var)" << "\n" << endl;
	cout << setw(20) << "#include <stdio.h>" << "\t" << "#include <iostream>" << "\n" << endl;
	cout << setw(20) << "" << "\t" << "using namespace NAME" << "\n" << endl;
	cout << setw(20) << "" << "\t" << "" << "\n" << endl;
	cout << setw(20) << "" << "\t" << "" << "\n" << endl;
}
