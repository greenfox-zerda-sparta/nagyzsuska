#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class Car {
public:
  string m_name_of_car;
  string m_color_of_car;
  string m_platenumber;
  Car() {

  }
  Car(string name_of_car, string color_of_car, string platenumber) {
    m_name_of_car = name_of_car;
    m_color_of_car = color_of_car;
    m_platenumber = platenumber;
  }
};

bool platenumber_checker(vector<vector<vector<Car> > > &vec, string platenumber) {
  for (unsigned int i = 0; i < vec.size(); i++) {
    for (unsigned int j = 0; j < vec[i].size(); j++) {
      for (unsigned int k = 0; k < vec[i][j].size(); k++) {
        return (vec[i][j][k].m_platenumber == platenumber);
      }
    }
  }
}

string platenumber_generator(vector<vector<vector<Car> > > &vec) {
  const string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const string num = "0123456789";
  string platenumber = "";
  do {
    for (unsigned int i = 0; i < 3; i++) {
      platenumber += str[rand() % 26];
    }
    platenumber += " - ";
    for (unsigned int i = 0; i < 3; i++) {
      platenumber += num[rand() % 10];
    }
  } while (platenumber_checker(vec, platenumber));
  return platenumber;
}
 
void fill_with_Cars(vector<vector<vector<Car> > > &vec, vector<string> &car_types, vector<string> &colors) {
  for (unsigned int i = 0; i < vec.size(); i++) {
    for (unsigned int j = 0; j < vec[i].size(); j++) {
      for (unsigned int k = 0; k < vec[i][j].size(); k++) {
        string name_of_type = car_types[rand() % 18];
        string color = colors[rand() % 8];
        string platenumber = platenumber_generator(vec);
        vec[i][j][k] = Car(name_of_type, color, platenumber);
      }
    }
  }
}

void find_Cars(vector<vector<vector<Car> > > &vec) {
  unsigned int sarga_zsiguli_counter = 0;
  for (unsigned int i = 0; i < vec.size(); i++) {
    for (unsigned int j = 0; j < vec[i].size(); j++) {
      for (unsigned int k = 0; k < vec[i][j].size(); k++) {
        if (vec[i][j][k].m_name_of_car == "Zsiguli" && vec[i][j][k].m_color_of_car == "Sárga") {
          sarga_zsiguli_counter++;
          cout << "There is a sarga zsiguli at position: " << i << ", " << j << ", " << k << endl;
        }
      }
    }
  }
  cout << "The sum of sarga zsiguli(s) :" << sarga_zsiguli_counter << endl;
}

void print_Cars(vector<vector<vector<Car> > > &vec) {
  unsigned int count = 1;
  for (unsigned int i = 0; i < vec.size(); i++) {
    for (unsigned int j = 0; j < vec[i].size(); j++) {
      for (unsigned int k = 0; k < vec[i][j].size(); k++) {
        cout << count << ". ";
        cout << vec[i][j][k].m_name_of_car << " ";
        cout << vec[i][j][k].m_color_of_car << " ";
        cout << vec[i][j][k].m_platenumber << " ";
        cout << endl;
        count++;
      }
    }
  }
}


int main() {

  vector<string> car_types = { "Moszkvics", "Volga", "ZISZ", "Tatra", "Zbrojovka", "Hotchkiss", "DAF", "Warszawa", "Puli", "Balaton",
                            "Benz", "Marauder", "Zsiguli" , "IFA", "Fjord", "Trabant", "Wartburg", "Martini" };

  vector<string> colors = { "Piros", "Narancssárga", "Zöld", "Kék", "Türkiz", "Barna", "Lila", "Sárga", "Fekete", "Fehér" };
  
  vector<vector<vector<Car> > > vec(4, vector<vector<Car> >(4, vector <Car>(8)));
  fill_with_Cars(vec, car_types, colors);
  print_Cars(vec);
  find_Cars(vec);
  cout << "My car: " << vec[0][0][0].m_name_of_car << " " << vec[0][0][0].m_color_of_car << " " << vec[0][0][0].m_platenumber << endl;
  vec.clear();
  print_Cars(vec);
  
  //Make sure there are no duplicates in car plates!
  //Print out how much "Sárga"-"Zsiguli" we have, with their position and platenumber in the parking house!
  //At the end empty the parking house!

  return 0;
}