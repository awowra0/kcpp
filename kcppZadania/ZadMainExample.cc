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
void fun3(int k, char *argv[]){
	cout << "Wywołane do tej pory dodatkowe parametry: ";
	for (int i=1; i<=k; i++) cout << *(argv+i) << " ";
	cout << endl;
}

void fun4(int argc, char *argv[]){
	int num = 0;
	for (int i=1; i<=argc; i++) num += static_cast<int>(*(argv[i])) - '1' + 1;
	if (num>20) num=20;
	else if (num<5) num=5;
	cout << "Ciąg Fibonaciego dla " << num << " elementów:\n0, 1";
	int fib[num]={0,1};
	for (int j=2; j<num; j++){
		fib[j] = fib[j-1] + fib[j-2];
		cout << ", " << fib[j];
	}
	cout << endl;
}

bool fun5(){
	cout << "true" << endl;
	return true;
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
					fun3(i, argv);
					break;
				case '4':
					fun4(i, argv);
					break;
				case '5':
					fun5();
					break;
			}
		}
	}
	return 0;
}
