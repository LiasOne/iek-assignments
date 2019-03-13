#include <iostream>

int main() {
  char can;
  int clientCounter = 0;
  int aCounter = 0;
  int bCounter = 0;
  int canCounter = 0;

  std::cout << "Δώσε συσκευασία που αγόρασε ο πελάτης: " << '\n';
  std::cin >> can;

  do {
    switch(can) {
      case 'a':
      case 'A':
        clientCounter++;
        aCounter++;
        canCounter+=4;
      break;

      case 'b':
      case 'B':
        clientCounter++;
        aCounter++;
        canCounter+= 6;
      break;

      default:  //Ο αριθμός δεν είναι μεταξύ 1-3
        std::cout << "Δέν υπάρχει αυτή η συσκευασία" << '\n';
      break;
    }
  } while (can!= '0');
      std::cout << "1) Αγοράστικαν" << aCounter << "τετράδες και" << bCounter << "εξάδες."<< '\n';
      std::cout << "2) Αγοράστικαν" << canCounter << "κουτάκια."<< '\n';
      std::cout << "3) Από το μαγαζί αγόρασαν" << clientCounter << "πελάτες" <<'\n';

  return 0;
}
