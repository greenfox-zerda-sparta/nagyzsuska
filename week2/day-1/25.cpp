//============================================================================
// Name        : 25.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int num = 2;
	do{
		cout << num << endl;
		num+=2;
	} while (num <= 20);

	cout << endl;

	int num2 = 2;
	while (num2<=20){
		cout << num2 << endl;
		num+=2;
	}

	cout << endl;

	for (int i= 2; i<=20; i+=2){
		cout << i << endl;
	}
	return 0;
}
