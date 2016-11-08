/*
 * Pirate.h
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#ifndef PIRATE_H_
#define PIRATE_H_

#include <iostream>
#include <string>

using namespace std;

class Pirate {
private:
  string name;
  unsigned int rumcounter = 0;
public:
  Pirate(string name);
  void drink_rum();
  string hows_goin_mate();
};

    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

#endif /* PIRATE_H_ */
