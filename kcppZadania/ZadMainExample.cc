#include <iostream>

using namespace std;




int fun1(int i){
	cout << "Funkcja została uruchomiona jako: "  << i << endl;
	return 0;
}
void fun2(int i){
	int k = i*i - 2*i + 1;
	cout << "Wartość funkcji f(" << i << ")=x^2-2x+1 wynosi "<< k << endl;
	return;
}
int fun3(){
	cout << 3 << endl;
	return 0;
}
int fun4(){
	cout << 4 << endl;
	return 0;
}
int fun5(){
	cout << 5 << endl;
	return 0;
}


int main(int argc, char *argv[]){
	if (argc==1){
		cout << "Za mało parametrów" << endl;
	}
	else{
		for (int i=1; i<argc; i++){
			switch (*argv[i]){
				case '1':
					fun1(i);
					break;
				case '2':
					fun2(i);
					break;
				case '3':
					fun3();
					break;
				case '4':
					fun4();
					break;
				case '5':
					fun5();
					break;
			}
		}
	}
	return 0;
}
