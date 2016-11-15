#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream my_file;
	my_file.open("fourth-example.txt");
	string file_content;
	string line;
	if (my_file.is_open()) {
		while (my_file >> file_content) {
			cout << file_content << '\n';
		}
	}
	else {
		return 2;
	}
	my_file.close();
	// Write a program that prints a content of a file called "fifth-exercise.txt"
	// If it could not open the file it should write: "Could not open the file" to the standard error
	// The program should return 2 if there where an error

	return 0;
}