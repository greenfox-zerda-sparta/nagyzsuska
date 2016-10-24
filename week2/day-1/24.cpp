//============================================================================
// Name        : 24.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

	int ae = 4;
	string text = "Gold";

	do {
		cout << text << endl;
		ae--;
	} while (ae>0);

	cout << endl;

	int af = 4;
	while (af>0){
		cout << text << endl;
		af--;
	}

	cout << endl;

	int ag = 4;
	for (ag;  ag > 0; ag--) {
		cout << text << endl;
	}

	return 0;
}

