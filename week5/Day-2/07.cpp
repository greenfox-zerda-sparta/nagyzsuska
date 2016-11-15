#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write_a_string_to_a_file(char* file_name, char* parameter);

int main() {


	write_a_string_to_a_file("first-exercise.txt", "what");
	//write_a_string_to_a_file("first-exercise.txt", "else");
	// Write a function that writes a string to a file
	// It should take the filename and the content as a string parameter

	return 0;
}

void write_a_string_to_a_file(char* file_name, char* parameter) {
	ofstream my_file;
	if (file_name) {
	my_file.open(file_name);
	my_file << parameter;
	my_file.close();
  }
}