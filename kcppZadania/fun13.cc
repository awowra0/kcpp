#include <iostream>

using namespace std;

class INumber{
	public:
		double dR = 0;
		double dI = 0;
		void print(){
			cout << "R: " << this->dR << " I: " << this->dI << endl;
		}
		void dprint();
		void plus(INumber *other){
			cout << "R: " << (this->dR + other->dR) << " I: " << (this->dI + other->dI) << endl;
		}
		void plus(INumber other){
			cout << "R: " << (this->dR + other.dR) << " I: " << (this->dI + other.dI) << endl;
		}
};

void INumber::dprint(){
	cout << this->dR*2 << endl;
}


int main(){
	INumber first;
	first.dR = 4;
	first.dI = 0;
	INumber *second = new INumber();
	second->dR = 5;
	second->dI = 2;
	first.print();
	second->dprint();
	cout << "R: " << first.dR + (second->dR) << endl;
	first.plus(second);
	second->plus(first);
	delete second;
	return 0;
}
