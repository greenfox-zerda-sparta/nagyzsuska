#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream my_file; 
	my_file.open("fourth-example.txt"); 
	string file_content;
	while (my_file >> file_content) {
	  cout << file_content << '\n';
	}
	my_file.close();

	return 0;
	}
	// Open a file called "fourth-exercise.txt"
	// Print all of its lines to the terminal window
