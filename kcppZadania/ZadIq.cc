#include <iostream>

using namespace std;

int main(){
	int A[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 3;
	int *q = A;
	cout << A[i] << endl;
	cout << q[i] << endl;
	cout << *(q+i) << endl;
	cout << *(i+q) << endl;
	cout << i[q] << endl;
	//i[q] oraz q[i] to ten sam zapis, wynikający z arytmetyki wskaźników.
	//q[i] -> *(q+i) == *(i+q) <- i[q]
	//Warunkiem pozostaje to, że jedna zmienna to liczba, druga to wskaźnik.
}
