#include <iostream>
using namespace::std;

int compute (int arg) {
  return 2 * arg;
}

int main() {
  int i = 5;
  cout << compute(i) << endl << i <<endl;
  return 0;
}
