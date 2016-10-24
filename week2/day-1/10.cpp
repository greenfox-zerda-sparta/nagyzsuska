//============================================================================
// Name        : 10.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	int j1 = 10;
	int j2 = 3;
	(j1 > sqrt(j2)) && (j1 < pow(j2, 3)) ? cout << "true" : cout << "false";
	return 0;
}
