//============================================================================
// Name        : 16.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
	int m[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			cout << m[i][j];
		}
		cout << endl;
	}

	cout << endl;

	for(int i = 0; i<3; i++){
			for(int j = 0; j<3; j++){
				cout << m[j][i];
			}
			cout << endl;
		}

	cout << endl;

	for(int i = 0; i<3; i++){
				for(int j = 0; j<3; j++){
					cout << m[i][j] << " | ";
				}
			}

	cout << endl << endl;

	for(int i = 0; i<3; i++){
				for(int j = 0; j<3; j++){
					cout << m[i][j] << endl;
				}
			}

	//This is an array of arrays. Print it out as a 3x3 matrix. Using each inner array as
	//a.) a row
	//b.) a column
	//c.) all in one line separated by the character '|'
	//d.) all in one column

	return 0;
}
