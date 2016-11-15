#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string read_content_of_a_file(char* file_name);

int main() {

	read_content_of_a_file("first-exercise.txt");
	// Write a function that reads the content of a file and returns it as a string
	// It should take the filename as a string parameter

	return 0;
}

string read_content_of_a_file(char* file_name) {
	ifstream my_file;
	my_file.open(file_name);
	string file_content;
	string temp;
	if (my_file.is_open()) {
		while (my_file >> file_content) {
			file_content += temp + " ";
		}
	}
	else {
		return "File not found.";
	}
	my_file.close();
}
