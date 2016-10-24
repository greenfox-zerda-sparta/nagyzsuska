//============================================================================
// Name        : 22.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>

using namespace std;

int main() {
	int ac = 8;
	int time = 120;
	string out = "";
	if ((ac % 4 == 0)&&(time <= 200)){
		out = "check";
	} else if (time > 200){
		out = "Time out";
	} else {
		out = "Run, Forest, run!";
	}
	cout << out;
	return 0;
}
