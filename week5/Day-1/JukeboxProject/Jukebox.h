/*
 * Jukebox.h
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#ifndef JUKEBOX_H_
#define JUKEBOX_H_

#include "Song.h"

class Jukebox {
  Song** songs;
  unsigned int song_count;
public:
  Jukebox();
  void add_songs(Song& song);
  void rate_by_title_and_artist(std::string title, std::string artist, unsigned int rate);
  double get_average(Song& song);
  double get_average_of_artist(std::string artist);
  double get_genre_rating(std::string genre);
  double get_average_of_title(std::string title);
  std::string* get_top_rated_titles(unsigned int& size);
  void get_top_genre();
  //std::string get_top_genre();
};

#endif /* JUKEBOX_H_ */
