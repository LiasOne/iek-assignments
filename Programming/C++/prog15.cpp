#include <iostream>
using std::cout;
using std::endl;
using std::cin;


// Dimiourgia function pou na typonei to athrisma ton stixion tou pinaka
// evresi tou megaliterou stixiou tou pinaka (oxi function)
// ektiposi tou arithmou twn arnitikon arithmon ston pinaka
// ektiposi tou athrismatos kathe gramis tou pinaka
// apothikefsi tou athrismatos kathe gramis se enan kainourio pinaka

int Sumf(int array[3][3], int M, int N)
{
int sum = 0;
for(int i = 0 ; i < M ; i++)
for(int j = 0 ; j < N ; j++) {
  sum = sum + array[i][j];
}
return sum;
}
// int sumf(int array[3][3], int sum) {
//   for (int i = 0; i < 3; i++)
//   for (int j = 0; j < 3; j++)
//   sum += array[i][j];
//   return sum;
// }
int main() {
  int array[3][3];
  int newArray[3];
  int biggest = 0;
  int negatives = 0;
  int line=1, linecontent = 0;
  int M=3, N=3;

  cout<<"dwse times ston pinaka: "<<endl;
  for (int i = 0; i < 3; i++)
  for (int j = 0; j < 3; j++)
  cin>>array[i][j];
  Sumf (array[3][3], M, N);
  // int sumf(int array[3][3], int sum=0);
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
  cout<<endl;
  cout<<"To athrisma olon ton stoixion tou pinaka einai: "<<Sumf<<endl;
  return 0;
}
