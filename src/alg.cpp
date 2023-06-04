// Copyright 2022 NNTU-CS

#include <algorithm>
#include <iostream>
#include <vector>

#include "tree.h"

int factorial(int n) { return n ? n * factorial(n - 1) : 1; }

std::vector<char> getPerm(const Tree& tree, int n) {
  if (n > factorial(tree.strv.size())) return std::vector<char>();

  std::vector<char> str = tree.strv;

  for (; n > 1 && std::next_permutation(str.begin(), str.end()); n--)
    ;

  return str;
}
