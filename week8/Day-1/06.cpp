// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in th calculations.

#include <time.h>
#include <string>
#include <iostream>

#define MY_PI 3,14

int main() {
  srand(time(0));
  int my_array[5];
  for (int i = 0; i < 5; i++) {
    my_array[i] = rand() % 100;
    std::cout << "The " << i + 1 << ". circumference is : " << 2 * my_array[i] * MY_PI;
    std::cout << std::endl;
    std::cout << "The " << i + 1 << ". area is : " << my_array[i] * my_array[i] * MY_PI;
    std::cout << std::endl;
  }



  return 0;
}