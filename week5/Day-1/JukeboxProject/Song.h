/*
 * Song.h
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#ifndef SONG_H_
#define SONG_H_
#include <string>

class Song {
  std::string title;
  std::string artist;
  std::string songs_genre;
  unsigned int rate;
  unsigned int rate_count;
protected:
  void set_songs_genre(std::string songs_gendre);
  void set_rate(int rate);
  void set_rate_count();
public:
  Song(std::string title, std::string artist);
  virtual ~Song();
  const std::string get_title() const;
  const std::string get_artist() const;
  const unsigned int get_rate() const;
  const std::string get_songs_genre() const;
  virtual bool rating(unsigned int rate);
  double get_average_rating();
  std::string get_songs_genre();
};

#endif /* SONG_H_ */
