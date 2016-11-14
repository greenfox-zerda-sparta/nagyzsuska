/*
 * Reggae.h
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#ifndef REGGAE_H_
#define REGGAE_H_

#include "song.h"

class Reggae : public Song {
public:
  virtual ~Reggae();
  Reggae(std::string title, std::string artist);
  bool rating(unsigned int rate);
};

#endif /* REGGAE_H_ */
