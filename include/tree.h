// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TREE_H_
#define INCLUDE_TREE_H_

#include <vector>

class Tree {
 public:
  std::vector<char> strv;
  Tree(std::vector<char> s) : strv(s) {}
};

#endif  // INCLUDE_TREE_H_
