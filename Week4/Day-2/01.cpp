//============================================================================
// Name        : 1.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21
  Student student1;
  student1.name = "John";
  student1.age = 21;
  cout << student1.name << "; " << student1.age << endl;
  return 0;
}
