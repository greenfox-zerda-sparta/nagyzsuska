
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  // Create a program that decrypts the file called "reversed-lines.txt",
  // and pritns the decrypred text to the terminal window.

  ifstream file;
  file.open("reversed-lines.txt");
  string line;
  string output;
  while (getline(file, line)) {
    for (int i = line.size() - 1; i >= 0; i--) {
      output += line[i];
    }
    output += '\n';
  }
  cout << output << endl;
  file.close();

  return 0;
}