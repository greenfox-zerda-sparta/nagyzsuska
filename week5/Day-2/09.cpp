#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  ifstream file;
  file.open("duplicated-chars.txt");
  string file_content;
  stringstream buffer;

  if (!file.is_open()) {
	std::cerr << "Could not open input file" << std::endl;
	return 1;
  }

  buffer << file.rdbuf();
  file_content = buffer.str();
  string output = "";
  for (int i = 0; i < file_content.size(); i += 2) {
    output += file_content[i];
  }

  cout << output;

  file.close();
	
	// Create a program that decrypts the file called "duplicated-chars.txt",
	// and pritns the decrypred text to the terminal window.

  return 0;
}