/*
 * Diamond.h
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#ifndef DIAMOND_H_
#define DIAMOND_H_

#include <iostream>
#include <string>

using namespace std;

class Diamond {
private:
  unsigned int length;
public:
  Diamond(unsigned int length);
  void print_diamond();
};


#endif /* DIAMOND_H_ */
