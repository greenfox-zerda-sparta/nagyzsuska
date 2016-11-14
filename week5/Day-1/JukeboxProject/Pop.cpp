/*
 * Pop.cpp
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#include "Pop.h"

Pop::Pop(std::string title, std::string artist) : Song(title, artist) {
  set_songs_genre("Pop");
}

Pop::~Pop() {
}
