/*
 * Circle.h
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
  private:
    double radius;
  public:
    Circle(double radius);
    double get_circumference();
    double get_area();
};

 //Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

#endif /* CIRCLE_H_ */
