#include <iostream>


using namespace std;



template<typename T>
class A{
	public:
		A(const T &a, const T &b) : procM(a), kwota(b){}

		const T OprMies(int mies = 3){
			T temp = kwota;
			for (int i=0; i<mies; i++){
				temp *= 100+procM;
				temp /= 100;
			}
			return temp;
		}

		const T OprR(){
			return OprMies(12);
		}

	private:
		const T procM;
		const T kwota;
};

//template<typename T>
//const T fun(const T &t1, const T &t2){return t1+t2;}


int main(){
	A<double> a(0.5, 10000);
	cout << a.OprMies() << endl;
	cout << a.OprMies(1) << endl;
	cout << a.OprMies(6) << endl;
	cout << a.OprR() << endl;
	A<int> b(1.33, 900);
	cout << b.OprMies() << endl;
	cout << b.OprMies(1) << endl;
	cout << b.OprMies(6) << endl;
	cout << b.OprR() << endl;
	return 0;
}
