/*
 * Reggae.cpp
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#include "Reggae.h"

Reggae::~Reggae(){
}

Reggae::Reggae(std::string title, std::string artist) : Song(title, artist) {
  set_songs_genre("Reggae");
}

bool Reggae::rating(unsigned int rate) {
  if (rate < 1 || rate > 4) {
    return false;
  } else {
    set_rate(rate);
    set_rate_count();
    return true;
  }
}
