#include <iostream>

using namespace std;

class A{
	public:
		A& setinum(int num){
			inum = num;
			cout << "inum: " << inum << endl;
			return *this;
		}
		A& setfnum(float f){
                        fnum = f;
			cout << "fnum: " << fnum << endl;
			return *this;
                }
		inline int getinum(){
                        return inum;
                }
		float getfnum(){
                        return fnum;
                }

		A& adress(){
			return *this;
		}

		void print();

		bool invert(){
			boolean = !boolean;
			return boolean;
		}

		bool plus(const A &b){
			if (boolean){
				cout << "Plus\t" << this->fnum + b.fnum << endl;
				return true;
			}
			return !invert();
		}
		int inum;

	protected:
		bool boolean=false;

	private:
		float fnum;
};

void A::print(){
	cout << inum << "\t" << fnum << "\t" << boolean << endl;
}

int main(){
	A abc;
	abc.setinum(3);
	abc.setfnum(3.4);
	abc.print();
	cout << abc.getinum() << endl;
	cout << abc.getfnum() << endl;
	cout << abc.invert() << endl;
	A def;
	def.setinum(5);
	def.setfnum(abc.getfnum()+2);
	def.print();
	abc.plus(def);
	def.plus(abc);
}
