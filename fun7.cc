#include <iostream>

using namespace std;


int fun(int tab[], int n){
	for (int i=0; i<n; i++) cout << tab[i] << " ";
	cout << endl;
	return 0;
}

int fun2(int tab[]){
	int iS = sizeof(&tab);
	for(int i=0; i<20; i++){
		if(sizeof(tab[0])==sizeof(&tab+i)) cout << i;
		else break;
		iS = i+1;
	}
	cout << endl;
	cout << iS << endl;
	return 0;
}


int main(){
	int n = 5;
	int tab[n] = {1,2,3,4,5};
	fun(tab,n);
	fun2(tab);//nie działa prawidłowo
	return 0;
}
