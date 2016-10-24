//============================================================================
// Name        : 18.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "monkey";
	if (x.size() > 4){
		cout << "Long!";
	} else {
		cout << "Short!";
	}
	return 0;
}
