#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
  int array[3][3], newArray[3];
  int biggest = 0;
  int negatives = 0;
  int line=1, linecontent = 0;

  cout<<"dwse times ston pinaka: "<<endl;
  for (int i = 0; i < 3; i++)
  for (int j = 0; j < 3; j++)
  cin>>array[i][j];

  cout<<"O pinakas einai: "<<endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++){
      cout<<array[i][j]<<" ";
      if (array[i][j] > biggest) {
        biggest = array[i][j];
      }
      if (array[i][j]<0) {
        negatives++;
      }
    }
    cout<<endl;
  }
  cout<<"O megaliteros arithmos tou pinaka einai: "<<biggest<<endl;
  cout<<"O pinakas exei: "<<negatives<<" arnitikous arithmous"<<endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++){
      linecontent+=array[i][j];
    }
    cout<<"H grami "<<line<<" exei athrisma: "<<linecontent<<endl;
    newArray[i] = linecontent;
    line ++;
    linecontent = 0;
  }
  cout<<"O neos pinakas einai: "<<endl;
  for (int i = 0; i < 3; i++) {
    cout<<newArray[i]<<" ";
  }
  return 0;
}
