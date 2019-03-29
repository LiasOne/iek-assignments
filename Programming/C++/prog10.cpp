#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void readMatrix (int array[3][3], int nRaw, int nCol) {
  cout << "Δώσε τιμές στον πίνακα: " << endl;
  for (int i = 0; i < nRaw; i++) {
    for (int j = 0; j < nCol; j++)
      cin >> array [i][j];
  }

  cout << "Ο πίνακας είναι: " << endl;
  for (int i = 0; i < nRaw; i++) {
    for (int j = 0; j < nCol; j++)
      cout << array [i][j] << " ";
    cout << endl;
  }
}

void newArray (int array [3][3], int array2 [3][3], int nRaw, int nCol) {
  for (int i = 0; i < nRaw; i++)
    for (int j = 0; j < nCol; j++) {
      if (array [i][j] == 0)
        array2 [i][j] = 0;
      else if (array [i][j] < 0)
        array2 [i][j] = -1;
      else if (array [i][j] > 0)
        array2 [i][j] = 1;
    }

  cout << "Ο νέος πίνακας είναι: " << endl;
  for (int i = 0; i < nRaw; i++) {
    for (int j = 0; j < nCol; j++)
      cout << array2 [i][j] << " ";
    cout << endl;
  }
}

int main() {
  int array [3][3];
  int array2 [3][3];

  readMatrix (array,3,3);
  newArray (array,array2,3,3);
  return 0;
}
