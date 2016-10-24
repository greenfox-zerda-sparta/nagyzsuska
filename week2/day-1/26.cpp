//============================================================================
// Name        : 26.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int i = 1;

	while (i <= 100){
		if ((i%3==0)&&(i%5==0)){
		cout << "FizzBuzz" << endl;
		} else if (i%3==0){
		cout << "Fizz" << endl;
		} else if (i%5==0){
		cout << "Buzz" << endl;
		} else {
		cout << i << endl;
		}
		i++;
	}

	/*do {
		if ((i%3==0)&&(i%5==0)){
		cout << "FizzBuzz" << endl;
		} else if (i%3==0){
		cout << "Fizz" << endl;
		} else if (i%5==0){
		cout << "Buzz" << endl;
		} else {
		cout << i << endl;
		}
		i++;
	} while (i <= 100);*/



	/*for (int i = 1; i <= 100; i++){
		if ((i%3==0)&&(i%5==0)){
			cout << "FizzBuzz" << endl;
		} else if (i%3==0){
			cout << "Fizz" << endl;
		} else if (i%5==0){
			cout << "Buzz" << endl;
		} else {
			cout << i << endl;
		}
	}*/

	return 0;
}
