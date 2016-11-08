/*
 * Tree.h
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#ifndef TREE_H_
#define TREE_H_

#include <iostream>
#include <string>

using namespace std;

class Tree {
private:
  unsigned int length;
public:
  Tree(unsigned int length);
  void print_tree();
};



#endif /* TREE_H_ */
