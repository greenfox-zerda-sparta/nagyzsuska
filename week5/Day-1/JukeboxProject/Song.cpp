/*
 * Song.cpp
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#include "Song.h"

Song::Song(std::string title, std::string artist) {
    this->title = title;
    this->artist = artist;
    this->rate = 0;
    this->rate_count = 0;
}

Song::~Song() {
}

const std::string Song::get_title() const {
  return title;
}

const std::string Song::get_artist() const {
  return artist;
}

const unsigned int Song::get_rate() const {
  return rate;
}

void Song::set_songs_genre(std::string songs_genre) {
  this->songs_genre = songs_genre;
}

void Song::set_rate(int rate) {
  this->rate += rate;
}

void Song::set_rate_count() {
  ++this->rate_count;
}

bool Song::rating(unsigned int rate) {
	if (rate < 1 || rate > 5) {
		return false;
	} 
	this->rate += rate;
	++this->rate_count;
	return true;
}

double Song::get_average_rating() {
  return (double)this->rate / (double)this->rate_count;
}

std::string Song::get_songs_genre() {
  return songs_genre;
}
