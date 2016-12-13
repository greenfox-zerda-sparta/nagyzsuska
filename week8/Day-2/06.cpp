// Write a program that creates a text file named alice_words.txt
// containing an alphabetical listing of all the words,
// and the number of times each occurs, in the text version of
// Alice’s Adventures in Wonderland.
// (You can obtain a free plain text version of the book,
// along with many others, from http://www.gutenberg.org.)
//
// The first 10 lines of your output file should look something like this:
//
// Word              Count
// =======================
// a                 631
// a-piece           1
// abide             1
// able              1
// about             94
// above             3
// absence           1
// absurd            2
//
// How many times does the word alice occur in the book?
// What is the longest word in Alice in Wonderland?
// How many characters does it have?

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string get_lines_from_file_in_lower_case() {
  string result = "";
  ifstream my_file;
  my_file.open("alice.txt");
  string line;
  while (getline(my_file, line)) {
    result += line + " ";
  }
  transform(result.begin(), result.end(), result.begin(), ::tolower);
  my_file.close();
  return result;
}

map<string, int> put_words_to_map(string result) {
  map <string, int> my_map;
  for (int i = 0; i < result.length(); i++) {
    if (result[i] == ' ' && result[i - 1] == '\'' || result[i + 1] == '\'') {
      result[i - 1] = ' ';
    }
  }
  char* writable = new char[result.size() + 1];
  std::copy(result.begin(), result.end(), writable);
  writable[result.size()] = '\0';
  char * pch;
  pch = strtok(writable, " ,.-!?*“”[]_‘():#;\"\t");
  while (pch != NULL) {
    my_map[string(pch)]++;
    pch = strtok(NULL, " ,.-!?*“”[]_‘():#;\"\t");
  }
  my_map.erase("’");
  delete[] writable;
  return my_map;
}

int get_sum_of_words(map<string, int> my_map) {
  int sum = 0;
  for (map<string, int>::iterator it = my_map.begin(); it != my_map.end(); ++it) {
    sum += it->second;
  }
  return sum;
}

string get_longest_word(map<string, int> my_map) {
  string longest_word = "";
  for (map<string, int>::iterator it = my_map.begin(); it != my_map.end(); ++it) {
    if (it->first.size() > longest_word.size()) {
      longest_word = it->first;
    }
  }
  return longest_word;
}

bool write_the_map_to_a_file(map<string, int> my_map) {
  ofstream alice("alice_words.txt");
  if (!alice) {
    return false;
  }
  alice << "Word\t\tCount\n=======================\n";
  for (map<string, int>::iterator iter = my_map.begin(); iter != my_map.end(); ++iter) {
    alice << iter->first << "\t\t" << iter->second;
    alice << "\n";
  }
  return true;
}

int main() {
  string result = get_lines_from_file_in_lower_case();
  map<string, int> my_map = put_words_to_map(result);
  cout << "Sum of words: " << get_sum_of_words(my_map);
  cout << "Longest word: " << get_longest_word(my_map);
  cout << "alice => " << my_map.find("alice")->second << endl;
  write_the_map_to_a_file(my_map);
  //system("pause");
  return 0;
}