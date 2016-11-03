//============================================================================
// Name        : 01.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  long double cpu_speed_hz;
  long double ram_size;
};

int main() {
  Computer computer = {"Macbook", 3.2e9, 8e9};

  // Change the name of the computer to "Macbook Pro" and print all the stats

  computer.name = "Macbook Pro";
  cout << computer.name << endl << computer.cpu_speed_hz << endl << computer.ram_size << endl;
  return 0;
}
