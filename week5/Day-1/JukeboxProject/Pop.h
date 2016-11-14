/*
 * Pop.h
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#ifndef POP_H_
#define POP_H_

#include "song.h"

class Pop : public Song {
public:
  Pop(std::string title, std::string artist);
  virtual ~Pop();
};

#endif /* POP_H_ */
