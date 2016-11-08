//============================================================================
// Name        : 2.cpp
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
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21 with it's constructor
  Student student1("John", 21);
  cout << student1.name << "; " << student1.age << endl;
  return 0;
}
