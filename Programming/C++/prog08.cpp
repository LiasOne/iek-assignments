#include <iostream>
using std::cout;
using std::endl;

int SUMM(int n[]);
int MAX(int n[]);
void selectionSort(int arr[], int n);

int main(){

  int sum = 0;
  int j;
  int n [10] = {3,6,9,12,15};

  for (j=0;j<5;j++)
  cout<<n[j]<<endl;

  for(j=0;j<5;j++)
  sum+=n[j];

  cout<<"το άθρισμα είναι: "<<sum<<endl;
  cout<<"το άθρισμα είναι: "<<SUMM(n)<<endl;
  cout <<"το μεγαλύτερο είναι: "<<MAX(n)<<endl;

  return 0;
}

int SUMM(int n[]){
  int SUM=0;
  int i;

  for(i=0;i<5;i++)
    SUM+=n[i];

  return SUM;
}

int MAX(int n[]){
  int MAX=n[1];
  int i;

  for(i=1;i<5;i++){
    if(n[i]>MAX)
    MAX=n[i];
  }
  return MAX;
}

void selectionSort(int arr[], int n) {
  int i, j, minIndex, tmp;

  for (i = 0; i < n - 1; i++) {
    minIndex = i;

    for (j = i + 1; j < n; j++) {
      tmp = arr [i];
      arr [i] = arr [minIndex];
      arr [minIndex] = tmp;
    }
  }
}
