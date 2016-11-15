#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ofstream my_file;
  my_file.open("third-example.txt");
  for (int i = 1; i <= 20; i++) {
    my_file << i << "\n";
  }
  my_file.close();
	
	// Open a file called "third-exercise.txt"
	// Write numbers from 0 to 20 into the file each in a new line

  return 0;
}