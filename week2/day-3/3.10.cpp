//============================================================================
// Name        : 10.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string safeConcat(string part1, string part2){
//Implement this function to create and return a new string which contains the two parts concatenated.
	string c = part1 + part2;
	return c;
}

int main(int argc, char** argv) {
	string a = "kutya";
	string b = " es macska";
	string c = safeConcat(a, b);
 	cout << "\"a\": " << a << endl;
	cout << "\"b\": " << b << endl;
	cout << "\"c\": " << c<< endl;
}
