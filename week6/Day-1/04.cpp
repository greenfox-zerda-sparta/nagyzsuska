#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.

string* split(string str, unsigned int index) throw (const char*){
  if (index > str.size()) {
    throw "Index is out of bound";
  }
  string splitted[2];
  for (unsigned int i = 0; i < index; i++) {
    splitted[0] += str[i];
  }
  for (unsigned int i = index; i < str.size(); i++) {
    splitted[1] += str[i];
  }
  return splitted;
}

// In the main function demonstrate the function when working, and when throwing an exception. 
// Write the results to the console.

int main() {
  try {
    split("Rebarbara", 11);
  } catch (const char* str) {
    cout << str;
  }
  return 0;
}