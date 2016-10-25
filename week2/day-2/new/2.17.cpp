//============================================================================
// Name        : 17.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Divides two floating point numbers
float divide(float a, float b) {
	return a / b;
}

//Creates the reciproc of a floating point value
float reciproc(float a){
	int r = 1;
	return r / a;
}


 int main(int argc, char** argv){
 	//Implement the functions declared above.
 	//Maybe You can use one function in the implementation of an other one...

 	cout << "Dividing 1 by 4: " << divide(1, 4) << endl;
 	cout << "Dividing 1.0 by 5.0: " << divide(1.0, 5.0) << endl;
 	cout << "The reciproc of 6 is: " << reciproc(6) << endl;

 	return 0;
 }
