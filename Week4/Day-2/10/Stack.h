/*
 * Stack2.h
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#ifndef STACK2_H_
#define STACK2_H_

#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
  int size;
  int* arr /*= new int[size]*/;
public:
  Stack();
  ~Stack();
  void set_arr(int* arr, int size);
  int get_size() const;
  void push(int value);
  int pop();
};

#endif /* STACK2_H_ */
