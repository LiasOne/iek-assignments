#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int num;

  cout<<"Δώσε έναν αριθμό"<<endl;
  cin>>num;

  if (num >= 1 && num <=3 ) {
    cout << "Μήνυμα" <<endl;
  } else {
    cout << "Άλλο μήνυμα" <<endl;
  }
  return 0;
}
