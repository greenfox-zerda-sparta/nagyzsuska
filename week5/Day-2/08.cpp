#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

bool copy_a_file_to_an_other1(string file_name1, string file_name2);
bool copy_a_file_to_an_other2(string file_name1, string file_name2);

int main() {
	copy_a_file_to_an_other1("first-exercise.txt", "second-exercise.txt");
  copy_a_file_to_an_other2("first.txt", "sec.txt");
	// Write a function that copies a file to an other
	// It should take the filenames as parameters
	// It should return a boolean that shows if the copy was successful
	return 0;
}

bool copy_a_file_to_an_other1(string file_name1, string file_name2) {
  ifstream file1;
  file1.open(file_name1);
  string temp = "";
  string buff;
  if (!file1.is_open()) {
    return false;
  }
  else {
    while (getline(file1, buff)) {
      temp += buff + '\n';
    }
    file1.close();
    ofstream file2;
    file2.open(file_name2);
    file2 << temp;
    file2.close();
    return true;
  }
}


bool copy_a_file_to_an_other2(string file_name1, string file_name2) {
	ifstream file1;
	file1.open(file_name1);
	string content;
	stringstream buffer;
	if (!file1.is_open()) {
		return false;
	}
	else {
		buffer << file1.rdbuf();
		content = buffer.str();
		file1.close();
		ofstream file2;
		file2.open(file_name2);
		file2 << content;
		file2.close();
		return true;
	}
}
