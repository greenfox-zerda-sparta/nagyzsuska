/*
 * main.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: nagyz
 */
#include "Shape.h"
#include "Triangle.h"
#include "Square.h"
#include <iostream>
#include <string>

using namespace std;


int main() {
  Shape* shape = new Shape();
  Triangle* triangle = new Triangle();
  Square* square = new Square();
  Shape* a;
  cout << "I am a...  " << *shape->getName() << endl;
  cout << "I am a...  " << *triangle->getName() << endl;
  cout << "I am a...  " << *square->getName() << endl;

  a = square;
  cout << "I am a...  " << *a->getName() << endl;

  a = triangle;
  cout << "I am a...  " << *a->getName() << endl;
  return 0;
}
