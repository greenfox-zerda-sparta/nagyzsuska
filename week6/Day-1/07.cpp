#include <iostream>
#include <string>
using namespace std;

string string_from_char_array(int i) throw (int, const char*) {
  const char* sentence[6] = { "What", "a", "pleasant", "surprie", "this", "is." };
  string str;
  if (i > 5) {
    throw i - 5;
  }
  if (i < 0) {
    throw "It is a negative number";
  }
  for (int i = 0; i < 6; i++) {
    str += sentence[i];
    str += " ";
  }
  cout << str;
  return str;
}
// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.
int main() {
  //const char* sentence[6] = { "What", "a", "pleasant", "surprie", "this", "is." };
  try {
    string_from_char_array(4);
  }
  catch (int i){
    cout << i;
  }
  catch (char* c) {
    cout << c;
  }
  return 0;
}