#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

void funA(){cout << "Wywołano funA" << endl;}

void funB(){cout << "Wywołano funB" << endl;}

int main(int argc, char *argv[]){
	if (argc == 2){
		string sw = string(argv[1]);
		int choice = 0;
		if (sw == "funA") choice = 1;
		else if (sw == "funB") choice = 2;
		switch (choice){
			case 1:
				funA();
				break;
			case 2:
				funB();
				break;
			default:
				cout << "Nieprawidłowy argument. Podaj jako argument: [funA|funB]" << endl;
		}
	}
	else{
		cout << "Podaj jako argument: [funA|funB]" << endl;
		char s[5]="";
		char c;
		int i = 0;
		while(1){
			c = getchar();
			if (c == '\n' | c == '\0') break;
			s[i] = c;
			i++;
		}
		if (string(s) == "funA") funA();
		else if (string(s) == "funB") funB();
		else cout << "Nieprawidłowy argument." << endl;
	}
	return 0;
}
