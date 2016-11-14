/*
 * Rock.h
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#ifndef ROCK_H_
#define ROCK_H_

#include "song.h"

class Rock : public Song {
public:
  virtual ~Rock();
  Rock(std::string title, std::string artist);
  bool rating(unsigned int rate);
};

#endif /* ROCK_H_ */
