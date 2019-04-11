#include <iostream>
using namespace std;

int main(){
  int sum = 0, array[10], sira = 1;

  cout<<"Δώσε 10 αριθμούς για να μάθεις το άθροισμα τους: "<<endl;

  for(int i=0; i<10; i++) {
    cout<<"Δώσε τον "<<sira<<"ο αριθμό: ";
    cin>>array[i];
    sira ++;
    sum = sum + array[i];
  }

  cout<<"Το άθροισμα των 10 αριθμών που έδωσες είναι: "<<sum<<endl;

  return 0;
}
