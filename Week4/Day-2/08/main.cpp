/*
 * main.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Pirate.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  Pirate mate("Greg");
  mate.drink_rum();
  cout << mate.hows_goin_mate() << endl;
  mate.drink_rum();
  cout << mate.hows_goin_mate() << endl;
  mate.drink_rum();
  cout << mate.hows_goin_mate() << endl;
  mate.drink_rum();
  cout << mate.hows_goin_mate() << endl;
  mate.drink_rum();
  cout << mate.hows_goin_mate() << endl;

  // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

  return 0;
}
