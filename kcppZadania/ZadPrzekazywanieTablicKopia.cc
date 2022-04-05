#include <iostream>

using namespace std;


void test(int A[], int n){
	cout << &A[0] << endl;
	for (int i=0; i<n; i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

int* copy(int A[], int C[], const int n){
	for (int i=0; i<n; i++){
		C[i] = A[i]+5;
	}
	return C;
}

int main(){
	const int n = 7;
	int A[n] = {1,2,3,4,5,6,7};
	int C[n];
	test(A,n);
	test(copy(A,C,n),n);
	test(A,n);
}
