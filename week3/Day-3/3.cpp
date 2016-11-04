//============================================================================
// Name        : 3New.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : DoubleVect2.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//============================================================================
// Name        : 2DoubleVector.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct DoubleVector {
  //double value;
  double* array;
  unsigned int size;
};

DoubleVector* vector_construct(double input[], int size) {
  DoubleVector* vector = new DoubleVector;
  vector->size = size;
  vector->array = new double[vector->size];
  for (unsigned int i = 0; i < vector->size; i++) {
    vector->array[i] = input[i];
  }
  return vector;
}

double vector_at(DoubleVector& v, unsigned int index) {
  if (index+1 > v.size) {
    return 0;
  }
  return v.array[index];
}

void vector_insert(DoubleVector& v, unsigned int index, double value) {
  v.size++;
  double* new_arr = new double[v.size];
  for (unsigned int i = 0; i < index; i++) {
    new_arr[i] = v.array[i];
  }
  new_arr[index] = value;
  for (unsigned int i = index+1; i < v.size; i++) {
    new_arr[i] = v.array[i];
  }
  delete[] v.array;
  v.array = new_arr;
}

unsigned int vector_find(DoubleVector& v, double value) {
  unsigned int index;
  for (unsigned int i = 0; i < v.size; i++) {
    if (v.array[i] == value) {
      index = i;
    }
  }
  return index;
}

void vector_remove(DoubleVector& v, unsigned int index) {
  v.size--;
  double* new_arr = new double[v.size];
    for (unsigned int i = 0; i < index; i++) {
      new_arr[i] = v.array[i];
    }
    for (unsigned int i = index; i < v.size; i++) {
      new_arr[i] = v.array[i+1];
    }
    delete[] v.array;
    v.array = new_arr;
}

DoubleVector* vector_concat(DoubleVector& v1, DoubleVector& v2) {
  DoubleVector* v3 = new DoubleVector;
  v3->size = v1.size + v2.size;
  for (unsigned int i = 0; i < v3->size; i++) {
    if (i < v1.size) {
    v3->array[i] = v1.array[i];
    } else {
      v3->array[i] = v2.array[i-v1.size];
    }
  }
  return v3;
}

int main() {
  double input[] = {1.5, 2.2, 3.4};
  DoubleVector* vector = vector_construct(input, 3);
  double input2[] = {1.5, 2.2, 3.4};
  DoubleVector* vector2 = vector_construct(input2, 3);
  cout << vector_at(*vector, 2);
  vector_insert(*vector, 0, 4.5);
  cout << vector->size << endl << vector->array[0];
  vector_remove(*vector, 2);
  cout << vector->size << endl << vector->array[2];
  DoubleVector* vector3 = vector_concat(*vector, *vector2);
  for (unsigned int i = 0; i < vector3->size; i++) {
    cout << vector3->array[i] << " ";
  }
  delete[] vector->array;
  delete vector;
  delete[] vector2->array;
  delete vector2;
  delete[] vector3->array;
  delete vector3;

  return 0;
}
