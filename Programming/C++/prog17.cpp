#include <iostream>

using namespace std;

int paragontiko( int n){
  if ( n > 1)
    return n * paragontiko( n - 1);
  else
    return 1;
}

int main() {
  int num;
  cout << " δώσε έναν αριθμό: "<< endl;

  cin >> num;

  cout << "Το Παραγοντικό του αριθμού " << num << " είναι: "<< paragontiko(num)<<endl;
  return 0;
}
