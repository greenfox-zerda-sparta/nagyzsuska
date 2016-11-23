#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the index is out of bounds, throw an exception.
// If the character is not in the string throw a different exception.
//

string* split(string str, char c) /*throw (const char*)*/ {
  bool c_in_str = false;
  int index = 0;
  string str_array[10];
  for (int j = 0; j < str.size(); j++) {
    if (str[j] != c) {
      str_array[index] += str[j];
    }
    else {
      c_in_str = true;
      index++;
    }
  }
  for (int i = 0; i < index+1; i++) {
    cout << str_array[i] << endl;
  }
  if (!c_in_str) {
      throw "C is not in the string";
  }
  return str_array;
}

// In the main function demonstrate the function when working, and when throwing an exception. 
// Write the results to the console.

int main() {
  try {
    split("What a nice day", ' ');
  }
  catch (const char* str) {
    cout << str;
  }
  return 0;
}