#include <iostream>
#include <fstream>
#include <string>
//#include <sstream>

using namespace std;

int main() {
  // Create a program that decrypts the file called "encoded-lines.txt",
  // and pritns the decrypred text to the terminal window.
  ifstream file1;
  file1.open("encoded-lines.txt");
  string content;
  string line;
    
  if (!file1.is_open()) {
    return false;
  }
  else {

    while (getline(file1, line)) {
      for (unsigned int i = 0; i < line.size(); i++) {
        if (line[i] != ' ') {
        line[i] = line[i] - 1;
        }
        content += line[i];
      }
      content += '\n';
   }
   cout << content;
  }
    file1.close();
  return 0;
}