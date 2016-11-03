//============================================================================
// Name        : 02.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

int get_surface(RectangularCuboid cuboid);
int get_volume(RectangularCuboid cuboid);
// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

int main() {
  RectangularCuboid cuboid = {12, 15, 34};
  cout << get_surface(cuboid) << endl;
  cout << get_volume(cuboid) << endl;
  return 0;
}

int get_surface(RectangularCuboid cuboid){
  int surface = (2 * cuboid.a * cuboid.b) + (2 * cuboid.b * cuboid.c) + (2 * cuboid.a  * cuboid.c);
  return surface;
}

int get_volume(RectangularCuboid cuboid){
  return (cuboid.a * cuboid.b * cuboid.c);
}
