#include <iostream>

using namespace std;

int fun1(){
	return "abc";
}

int fun2(){
	return;
}

int fun3(){
	int k = 1;
}

int fun4(){
	return 8;
}

int main(){
	int A[10]={0};
	int A0[10];
	/*for (int i=0; i<10; i++){
		cout << "A " << A[i] << endl;
		cout << "A0 " << A0[i] << endl;
	}
	int ww;
	cout << ww << endl;*/

	/*int A1[]={1,3,5,7,9};
	int A2[6]={0};
	int A3[6]{0,0,0,0,0,0};
	int A4[6]{0};
	int A5[6]={1,2,3,4};
	for (int j=0; j<6; j++){
		cout << A2[j] << " " << A3[j] << " " << A4[j] << " " << A5[j] << endl;
	}*/


	cout << fun1() << endl;
	//fun2();
	fun3();
	cout << fun4() << endl;
	return 0;
}

/*
int main()
int main(void)
int main(int argc, char *argv[])
int main(int argc, char *argv[], char *envp[])
*/
