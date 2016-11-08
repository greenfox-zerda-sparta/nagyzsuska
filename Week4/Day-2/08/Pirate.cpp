/*
 * Pirate.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Pirate.h"
#include <iostream>
#include <string>

using namespace std;

Pirate::Pirate(string name) {
  this->name = name;
}

void Pirate::drink_rum() {
  this->rumcounter++;
}

string Pirate::hows_goin_mate() {
  if (this->rumcounter < 5) {
    return "Nothin'";
  }
  if (this->rumcounter == 5) {
    return "Arrrr!";
  }
}
