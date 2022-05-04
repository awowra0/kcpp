#include <iostream>

using namespace std;

class A{
	public:
		A(){inum=0; fnum=0;}
		A(int num) {inum=num; fnum=0;}
		A(int i, float f) : inum(i), fnum(f){}
		A(const A &b){
			inum = b.inum;
			fnum = b.fnum;
		}
		~A(){cout << "Class destroyed" << endl;}

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
		int getinum(){
                        return inum;
                }
		float getfnum(){
                        return fnum;
                }

		A& adress(){
			return *this;
		}

		void print(){
			cout << inum << "\t" << fnum << "\t" << boolean << endl;
		}

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

	protected:
		bool boolean=false;

	private:
		int inum;
		float fnum;
};


int main(){
	A abc;
	abc.print();
	abc.setinum(3);
	abc.setfnum(3.4);
	abc.print();
	cout << abc.getinum() << endl;
	cout << abc.getfnum() << endl;
	cout << abc.invert() << endl;
	A def(abc);
	A *ghi = new A();
	delete ghi;
	def.print();
	abc.plus(def);
	def.plus(abc);
}
