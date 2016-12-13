#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

set<char> set_characters(string str) {
  set<char> c;
  for (int i = 0; i < str.size(); i++) {
    c.insert(str[i]);
  }
  /*for (set<char>::iterator it = c.begin(); it != c.end(); it++) {
    cout << *it << " ";
  }*/

  while (!c.empty()) {
    std::cout << ' ' << *c.begin();
    c.erase(c.begin());
  }
  return c;
}

map <char, int> letter_count(string str) {
  map <char, int> my_map;
  for (unsigned int i = 0; i < str.size(); i++) {
    my_map[str[i]]++;
  }
  return my_map;
}

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and 
// it should have integers as values that represents how many times the
// letter appeared int the string

int main() {
  //set_characters("almafa");

  map <char, int> m_map = letter_count("cseresznye");
  for (map<char, int>::iterator it = m_map.begin(); it != m_map.end(); ++it) {
    std::cout << it->first << " " << it->second << " " << endl;
  }
  system("pause");
  return 0;
}