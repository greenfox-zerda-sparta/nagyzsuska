#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  ifstream secFile;
  secFile.open("second-exercise.txt");
  string file_content;
  secFile >> file_content;
  secFile.close();
  // Open a file called "second-exercise.txt"
  // Read the content of the file and print it to the terminal window

  return 0;
}
