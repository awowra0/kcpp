#include <iostream>
#include <math.h>

using namespace std;

class Figura{
	public:
		virtual double obwod() = 0;
		virtual double pole() = 0;
};

class Trojkat : public Figura{
	public:
		Trojkat(double x, double y, double z){
			if (x+y>z && x+z>y && y+z>x){
				a = x; b = y; c = z;
			}
			else{
				cout << "Błąd trójkąta" << endl;
			}
		}
		double obwod(){
			return a+b+c;
		}
		double pole(){
			double p = (a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}

	private:
		double a,b,c;
};

class Prostokat : public Figura{
	public:
		Prostokat(double x, double y){
			a = x; b = y;
		}
		double obwod(){return 2*a+2*b;}
		double pole(){return a*b;}
	private:
		double a,b;
};

class Kwadrat : public Figura{
	public:
		Kwadrat(double x){
			a = x;
		}
		double obwod(){
			return 4*a;
		}
		double pole(){return a*a;}

	private:
		double a;
};

class Kolo : public Figura{
	public:
		Kolo(double x){r=x;}
		double pole(){return M_PI*r*r;}
		double obwod(){return 2*M_PI*r;}
		double Dystans(double p){
			return sqrt(p/M_PI);
		}
	private:
		double r;
};

int main(){
	Trojkat t(3,4,5);
	cout << t.obwod() << endl;
	cout << t.pole() << endl;
	Prostokat p(3,5);
	cout << p.obwod() << endl;
	cout << p.pole() << endl;
	Kwadrat k(4);
	cout << k.obwod() << endl;
	cout << k.pole() << endl;
	Kolo o(3);
	cout << o.obwod() << endl;
	cout << o.pole() << endl;
	cout << o.Dystans(10) << endl;
	Kolo o2(o.Dystans(10));
	cout << o2.pole() << endl;
}
