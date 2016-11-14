/*
 * main.cpp
 *
 *  Created on: 2016 nov. 11
 *      Author: nagyz
 */

#include <iostream>
#include <string>
#include "Jukebox.h"
#include "Rock.h"
#include "Pop.h"
#include "Reggae.h"
using namespace std;


int main () {

  Rock r1("Hotel California", "Eagles");
  Rock r2("La Grange", "ZZ Top");
  Rock r3("L.A. Woman", "The Doors");
  Rock r4("Roadhouse Blues", "The Doors");
  r1.rating(5);
  r2.rating(5);
  r2.rating(5);
  r1.rating(5);

  Pop p1("Closer", "The Chainsmokers Featuring Halsey");
  Pop p2("Starboy", "The Weeknd Featuring Daft Punk");
  Pop p3("Heathens", "twenty one pilots");
  p1.rating(2);
  p2.rating(5);
  p2.rating(2);
  p1.rating(1);
  p3.rating(2);

  Reggae re1("Treat You Better", " Shaun Mendes");
  Reggae re2("Hoist & Wine", "Charly Black");
  Reggae re3("Progress", "Mavado");
  re1.rating(4);
  re2.rating(4);
  re2.rating(3);
  re1.rating(1);

  cout << r1.rating(8) << endl;
  cout << r1.get_average_rating() << endl;
  cout << r1.get_songs_genre() << endl;

  Jukebox j;

  j.add_songs(r1);
  j.add_songs(r2);
  j.add_songs(r3);
  j.add_songs(r4);
  j.add_songs(p1);
  j.add_songs(p2);
  j.add_songs(p3);
  j.add_songs(re1);
  j.add_songs(re2);
  j.add_songs(re3);

  j.rate_by_title_and_artist("Roadhouse Blues", "The Doors", 5);
  j.rate_by_title_and_artist("L.A. Woman", "The Doors", 3);

  cout << "Average of the given song: " << j.get_average(r1) << endl;
  cout << "Average of the given artist: " << j.get_average_of_artist("The Doors") << endl;
  cout << "Average of the given title: " << j.get_average_of_title("L.A. Woman") << endl;
  cout << "Average of the given genre: " << j.get_genre_rating("Pop") << endl;
  //cout << j.get_top_rated_title() << endl;
  //j.get_top_rated_title_with_bubble();
  cout << "The top rated genre: ";
  j.get_top_genre();
  cout << endl;
  
  unsigned int size = 0;
  std::string* titles = j.get_top_rated_titles(size);

  cout << "The top rated title(s): " << endl;
	for (unsigned int i = 0; i < size; ++i) {
	  cout << titles[i] << endl;
	}
    
  delete[] titles;
  return 0;
}

