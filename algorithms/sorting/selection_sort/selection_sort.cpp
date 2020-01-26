// This program shows a simple way to implement selection sort in C++
// By: Nick from CoffeeBeforeArch

#include <algorithm>
#include <random>
#include <vector>
#include <iostream>

void selection_sort(std::vector<int> &v) {
}

int main() {
  // Number of elements to sort
  const unsigned N = 20;
  
  // Our vector to sort
  std::vector<int> v(N);

  // Set up our random number generator
  std::mt19937 rng;
  rng.seed(std::random_device()());
  std::uniform_int_distribution<int> dist(0, 255);

  // Generate our random inputs
  std::generate(begin(v), end(v), [&](){ return dist(rng); });

  // Dump the potentially unsorted contents
  std::cout << "Before: ";
  for(auto i : v) {
    std::cout << i << " ";
  }
  std::cout << '\n';

  // Sort the vector
  selection_sort(v);

  // Dump the sorted contents
  std::cout << "After: ";
  for(auto i : v) {
    std::cout << i << " ";
  }
  std::cout << '\n';

  return 0;
}
