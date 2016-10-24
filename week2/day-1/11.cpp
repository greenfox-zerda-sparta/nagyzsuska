//============================================================================
// Name        : 11.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int k = 1521;
	(k%3==0) || (k%5==0) ? cout << "true" : cout << "false";
	return 0;
}
