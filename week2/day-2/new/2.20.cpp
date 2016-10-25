//============================================================================
// Name        : 1.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int charCounter(string word, char letter){
	int num = 0;
	for (int i = 0; i < sizeof(word); i++){
		if (word[i]==letter){
			num++;
		}
	}
	return num;

}

int main(){
	string word = "makkoshotyka-also";
	char letter = 'o';
	// Write a function that takes a string and a character, and counts how many
	// times the character occures in the string and it should return a number
	cout << charCounter(word, letter);
	return 0;
}
