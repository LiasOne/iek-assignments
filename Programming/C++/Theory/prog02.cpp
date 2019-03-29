#include <iostream>
using namespace::std;

void sunarthsh(int x=10, string c="Gkouvelis" ){
   for(int i=0; i<x; i++){
     cout << c << endl;
   }
}

// void sunarthsh(int x){
//   for(int i=0; i<x; i++){
//     cout << "Gkouvelis" << endl;
//   }
// }
//
// void sunarthsh(){
//   for(int i=0; i<10; i++){
//     cout << "Gkouvelis" << endl;
//   }
// }

int main(){
  string onoma;
  int x;
  cout << "Dwse mou ena onoma: " <<endl;
  getline(cin, onoma);
  cout << "Dwse mia timh: " << endl;
  cin >> x;
  sunarthsh(x,onoma);
  cout << "-------------------" << endl;
  sunarthsh(x);
  cout << "--------------------" << endl;
  sunarthsh();
}
