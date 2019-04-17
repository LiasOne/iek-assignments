// Γράψτε ένα πρόγραμμα που επεξεργάζεται τη βαθμολογία 4 τάξεων ενός φροντιστηρίου.
// Κάθε τάξη έχει 3 μαθητές. Οι καταχωρήσεις των βαθμών θα πρέπει να γίνουν σε δισδιάστατο πίνακα.
//
// Να τυπωθούν οι βαθμοί ανά τάξη
// Να υπολογιστεί ο μέσος όρος των βαθμών κάθε τάξης

#include <iostream>
using namespace std;

int array [4][3] = {
                        {10, 9, 8},
                        {9, 7, 6},
                        {5, 6, 6},
                        {5, 7, 5}
                      };
int sum = 0, taksi = 1, vathmoiTaksis;

void vathmoi() {
  for (int i = 0; i < 4; i++){
    cout<<"Οι βαθμοί της "<<taksi<<"ης τάξης είναι: ";
    for (int j = 0; j < 3; j++) {
      vathmoiTaksis = array [i][j];
      cout << vathmoiTaksis<<", ";
    }
    taksi++;
    cout << endl;
  }
}

void mesosOros() {
  for (int i = 0; i < 4; i++){
    cout<<"Ο μέσως όρος της "<<taksi<<"ης τάξης είναι: ";
    for (int j = 0; j < 3; j++) {

      sum += array [i][j];
    }
  cout << sum / 3;
  sum = 0;
  taksi++;
  cout << endl;
  }
}

int main() {
  vathmoi();
  mesosOros();
  taksi = 1;
  cout << endl;
  return 0;
}
