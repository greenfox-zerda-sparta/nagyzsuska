//============================================================================
// Name        : 12.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	string m = "Apple";
	for (int i = 0; i < 2; i++) {
		m+=m;
	}
	cout << m;

	return 0;
}
