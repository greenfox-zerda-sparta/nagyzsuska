//============================================================================
// Name        : 20.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int z = 13;
	if (z > 10 && z < 20){
		cout << "Sweet!";
	} else if (z < 10){
		cout << "More!";
	} else {
		cout << "Less!";
	}
	return 0;
}
