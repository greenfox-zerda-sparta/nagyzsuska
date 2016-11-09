/*
 * main.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: nagyz
 */

#include <iostream>
#include <string>

using namespace std;


class Shape {

    public:
        //Shape();
       virtual string* getName();
       virtual ~Shape();

};
//Shape::Shape() {
//}
string* Shape::getName() {
    return new string("Generic Shape");
}

Shape::~Shape() {
}

class Triangle: public Shape {
public:
  Triangle();
  string* getName();
};
Triangle::Triangle() {
}
string* Triangle::getName() {
  return new string("Triangle");
}

class Square: public Shape {
public:
  Square();
  string* getName();
};

Square::Square() {
}
string* Square::getName() {
  return new string("Square");
}
// Create 2 classes which inherit from the above defined class, Shape
// One should be Triangle, the other Square.
// Create their getName function based on the above example.
// Then watch what the code below does.
// If You find any typos, etc, correct them.

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
