#include <iostream>

using namespace std;

const int bathmoi = 10;

void gemismaPinaka(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "dwse arithmo" << endl;
    cin>>arr[i];
  }
}
int epistrofiMO(int arr[], int size, int sum) {
  for (int i = 0; i < 10; i++) {
    sum += arr[i];
  }
  average = sum / bathmoi;
  return average;
}
int main() {
  int pinakas[bathmoi], sum = 0;
  float average;
  gemismaPinaka();
  epistrofiMO();

  cout << "O mesos Oros twn deka bathmon einai: " <<average<<'\n';
  return 0;
}
