#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
  int num;
  cout<<"Δώστε έναν αριθμό μεταξύ 1-3:"<<endl;
  cin>>num;

  switch(num) {
    case 1:
    case 2:
    case 3:
      cout<<"Ο αριθμός που δώσατε είναι ο: "<<num<<endl;
    break;  //έξοδος από τη switch

    default:  //Ο αριθμός δεν είναι μεταξύ 1-3
      cout<<"Ο αριθμός που δώσατε δεν είναι μεταξύ 1-3."<<endl;
    break;
  } // Τέλος switch

  cout<<endl;
  return 0;
}
