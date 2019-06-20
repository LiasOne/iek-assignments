#include <iostream>
using namespace std;

int main() {
  int array [3][3] = {  {00, 01, 02},
                        {10, 11, 12},
                        {20, 21, 22},
                      };

  int sum = 0;

  for (int i = 0; i < 3; i++)
    sum += array[i][i];
  cout << sum;


  return 0;
}
