#include <iostream>

// Η συνάρτηση main αρχήζει την εκτέλεση του προγράμματος

int main(int argc, char const *argv[]) {
  int i = 20;
  while (i >= 1) {
    std::cout << i << '\n';
    --i;
  }

  std::cout << '\n';
  system("PAUSE");
  return 0;
}
