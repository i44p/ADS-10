// Copyright 2022 NNTU-CS

#include <algorithm>
#include <iostream>
#include <vector>

#include "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  std::vector<char> str = tree.strv;

  for (int count = 1; count < n; count++)
    std::next_permutation(str.begin(), str.end());

  return str;
}
