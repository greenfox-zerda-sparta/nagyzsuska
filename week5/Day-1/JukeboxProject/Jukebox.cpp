/*
 * Jukebox.cpp
 *
 *  Created on: 2016 nov. 12
 *      Author: nagyz
 */

#include <iostream>
#include <string>
#include <map>
#include "Jukebox.h"
using namespace std;

Jukebox::Jukebox(){
  songs = NULL;
  song_count = 0;
}

void Jukebox::add_songs(Song& song) {
  Song** temp = new Song*[song_count + 1];
  if (songs != NULL) {
    for (unsigned int i = 0; i < song_count; ++i) {
      temp[i] = songs[i];
    }
  }
  temp[song_count] = &song;
  delete[] songs;
  songs = temp;
  ++song_count;
}

void Jukebox::rate_by_title_and_artist(std::string title, std::string artist, unsigned int rate) {
  for (unsigned int i = 0; i < song_count; ++i) {
    if ((songs[i]->get_title() == title) && (songs[i]->get_artist() == artist)) {
      songs[i]->rating(rate);
    }
  }
}

double Jukebox::get_average(Song& song) {
  return song.get_average_rating();
}

double Jukebox::get_average_of_artist(std::string artist) {
  int avr = 0;
  int count = 0;
  for (unsigned int i = 0; i < song_count; ++i) {
    if(songs[i]->get_artist() == artist) {
     avr += songs[i]->get_average_rating();
     ++count;
    }
  }
    // avoid divide by zero
  if (count > 0) {
	  return (double)avr / (double)count;
  }
    return 0;
}

double Jukebox::get_genre_rating(std::string genre) {
  int avr = 0;
  int count = 0;
  for (unsigned int i = 0; i < song_count; ++i) {
    if (songs[i]->get_songs_genre() == genre) {
      avr += songs[i]->get_average_rating();
      ++count;
    }
  }
  return (double)avr / (double) count;
}

double Jukebox::get_average_of_title(std::string title) {
  int avr = 0;
  int count = 0;
  for (unsigned int i = 0; i < song_count; ++i) {
    if (songs[i]->get_title() == title) {
      avr += songs[i]->get_average_rating();
      ++count;
    }
  }
  return (double)avr / (double) count;
}

std::string* Jukebox::get_top_rated_titles(unsigned int& size) {
  double max = songs[0]->get_average_rating();
  for (unsigned int i = 0; i < song_count; ++i) {
    if (songs[i]->get_average_rating() > max) {
      max = songs[i]->get_average_rating();
    }
  }
  std::string* titles = new std::string[song_count];
  size = 0;
  for (unsigned int i = 0; i < song_count; ++i) {
    if (songs[i]->get_average_rating() == max) {
      titles[size] = songs[i]->get_title();
      size++;
    }
  }
  return titles;
}

void Jukebox::get_top_genre() {
  double max = get_genre_rating("Pop");
  if (get_genre_rating("Rock") > max) {
    max = get_genre_rating("Rock");
  }
  if (get_genre_rating("Reggae") > max) {
  max = get_genre_rating("Reggae");
  }
  if (get_genre_rating("Pop") == max) {
    std::cout << "Pop ";
  }
  if (get_genre_rating("Rock") == max) {
    std::cout << "Rock ";
  }
  if (get_genre_rating("Reggae") == max) {
    std::cout << "Reggae ";
  }
}


