/*
 * Stack2.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Stack2.h"
#include <iostream>
#include <string>

using namespace std;

Stack::Stack() {
  this->size = 0;
  this->arr = new int[0];
}

Stack::~Stack(){
  delete[] arr;
}

void Stack::set_arr(int *arr, int size) {
  this->size = size;
  //for (int i = 0; i < this->size; i++) {
  delete[] this->arr;
  this->arr = new int[size];
  for(int i=0;i<size;++i){
    this->arr[i]=arr[i];
  }
  //}
}

int Stack::get_size() const{
  //this->size=9;
  return this->size;
}

void Stack::push(int value) {
  this->size++;
  int* temp = new int[this->size];
  for (int i = 0; i < this->size; i++) {
    temp[i] = this->arr[i];
  }
  temp[this->size-1] = value;
  delete[] this->arr;
  this->arr = temp;
}

int Stack::pop() {
  int value = this->arr[this->size-1];
  this->size--;
  int* temp = new int[this->size];
  for (int i = 0; i < this->size; i++) {
    temp[i] = this->arr[i];
  }
  delete[] this->arr;
  this->arr = temp;
  return value;
}


