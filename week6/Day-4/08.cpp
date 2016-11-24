#include <iostream>
#include <string>
#include <vector>

using namespace std;

void add_character(vector<char>& v) {
  char c;
  string str = "greenfox";
  for (unsigned int i = 0; i < 8; i++) {
    cout << "Add a character: ";
    cin >> c;
    if (c != str[i]) {
      cout << "Not correct. ";
      i--;
    }
    else {
      v.push_back(c);
    }
  }
}
  
void print_vector(const vector<char>& v) {
  for (unsigned int i = 0; i < v.size(); i++) {
    cout << v[i];
  }
}

int main() {

  vector<char> v(8);
  //create a vector of characters with the size of 8
  //ask the user to fill this vector with characters one by one
  //at the end make sure the vector holds the letters of "GREENFOX"
  //so correct the user if he/she gives a different letter from the one we want them to give :)

  add_character(v);
  print_vector(v);

  return 0;
}