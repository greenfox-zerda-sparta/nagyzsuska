//============================================================================
// Name        : 4.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

class Student {
  private:
    string name;
    unsigned int age;
  public:
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }

    string greet() {
      return "Hello my name is: " + this->name;
    }
    void set_name(string name) {
      this->name = name;
    }
};

int main() {
  // Create a method on student that takes a string as an argument and
  // changes it's name property

  Student student1("John", 21);
  student1.set_name("Luy");
  cout << student1.greet();

  return 0;
}
