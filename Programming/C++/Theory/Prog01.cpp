#include <iostream>

int main() {

  std::cout << "Έρανος για το τμήμα ΤΕΠ Β" << '\n';
  std::cout << "Στόχος εράνου είναι τα: 1000€" <<'\n'<<'\n';

  int donatorsCounter = 0;
  int donation = 0;
  int totalDonation = 0;
  int target = 1000;

  do {
    std::cout << "Τι ποσό θέλετε να δωρίσετε; ";
    std::cin >> donation;
    totalDonation += donation;
    donatorsCounter++;

  } while(totalDonation <= target);

  std::cout << "Έχουν μαζευτεί: " << totalDonation << "€. " << "Από "<<donatorsCounter<<" δωρητές"<<'\n';



  return 0;
}
