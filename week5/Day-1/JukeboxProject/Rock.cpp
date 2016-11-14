/*
 * Rock.cpp
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#include "Rock.h"

Rock::~Rock() {
}

Rock::Rock(std::string title, std::string artist) : Song(title, artist) {
  set_songs_genre("Rock");
}

bool Rock::rating(unsigned int rate) {
  if (rate < 2 || rate > 5) {
    return false;
  } else {
    set_rate(rate);
    set_rate_count();
    return true;
  }
}
