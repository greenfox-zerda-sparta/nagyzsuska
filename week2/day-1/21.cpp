//============================================================================
// Name        : 21.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	int ab = 123;
	int credits = 100;
	bool is_bonus = true;
	if ((credits >= 50)&& (!is_bonus)){
		ab-=2;
	} else if ((credits < 50)&& (!is_bonus)){
		ab-=1;
	}
	cout << ab;
	return 0;
}
