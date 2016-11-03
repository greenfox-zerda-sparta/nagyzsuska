//============================================================================
// Name        : 05.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>
#include <iostream>

using namespace std;

struct House {
  string addresse;
  double price; //price in Eur
  int num_of_rooms;
  int area; //area in m2
};

bool is_worth(House& house);

// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
//
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a refrence to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)
//
int count(House* array, int length);

// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
//
House* new_array_with_squaremeters_price(House* array, int length);
// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.

int main() {
  House house1 = {"Narcisz", 3000, 3, 56};
  cout << is_worth(house1) << endl;
  House* houses = new House[5];
  houses[0] = {"Narcisz", 13000, 3, 56};
  houses[1] = {"Hovirag", 4000, 4, 86};
  houses[2] = {"Ibolya", 23000, 3, 60};
  houses[3] = {"Viola", 44000, 5, 80};
  houses[4] = {"Tulipan", 3700, 2, 46};
  cout << count(houses, 5) << endl;
  House* new_array = new_array_with_squaremeters_price(houses, 5);
  //cout << new_array[0].price;
  delete[] new_array;
  new_array = nullptr;
  return 0;
}

bool is_worth(House& house) {
  return ((house.price /(double) house.area) < 400);
}

int count(House* array, int length) {
  int count= 0;
  for (int i = 0; i < length; i++) {
    if (is_worth(*array)) {
      count++;
    }
    array++;
  }
  return count;
}

House* new_array_with_squaremeters_price(House* array, int length) {
  House* new_array = new House[length];
  for (int i = 0; i < length; i++) {
    new_array[i].addresse = array[i].addresse;
    new_array[i].area = array[i].area;
    new_array[i].num_of_rooms = array[i].num_of_rooms;
    new_array[i].price = (array[i].price / array[i].area);
  }
  cout << new_array[3].addresse << endl << new_array[3].price << endl;
  return new_array;
}
