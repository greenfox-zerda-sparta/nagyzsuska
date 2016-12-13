#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe

vector<string> get_names() {
  vector<string> names;
  string input;
  cout << "Give a name for Santa pairs or press 'q' to quit." << endl;
  while (cin >> input) {
    if (input == "q") {
      break;
    }
    names.push_back(input);
    cout << "Give a name for Santa pairs or press 'q' to quit." << endl;
  }
  return names;
}

bool check_names(vector <string> names1, vector <string> names2) {
  for (unsigned int i = 0; i < names1.size(); i++) {
    if (names1[i] == names2[i]) {
      return false;
    }
  }
  return true;
}

void print(vector<string> names1, vector<string> names2) {
  for (unsigned int i = 0; i < names1.size(); i++) {
    cout << names1[i] << " - " << names2[i] << endl;
  }
}

void create_secret_santa_pairs() {
  vector<string> names1 = get_names();
  vector<string> names2 = names1;
  do {
    //random_shuffle(names1.begin(), names1.end());
    random_shuffle(names2.begin(), names2.end());
  } while (!check_names(names1, names2));

  print(names1, names2);
}

int main() {
  create_secret_santa_pairs();
  return 0;
}