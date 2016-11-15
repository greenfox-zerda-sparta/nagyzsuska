#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
  ofstream firstFile;
  firstFile.open("first-exercise.txt");
  firstFile << "Nagy Zsuzsanna\n";
  firstFile.close();
// Open a file called "first-exercise.txt"
// Write your name in it as a single line

  return 0;
}