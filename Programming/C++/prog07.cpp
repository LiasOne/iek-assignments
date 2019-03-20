#include <iostream>

int main() {
  char can;
  int end = 0;
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

      case '0':
        end=1;
      break;

      default:
        std::cout << "Δέν υπάρχει αυτή η συσκευασία" << '\n';
      break;
    }
  } while (end==0);
      std::cout << "1) Αγοράστικαν" << aCounter << "τετράδες και" << bCounter << "εξάδες."<< '\n';
      std::cout << "2) Αγοράστικαν" << canCounter << "κουτάκια."<< '\n';
      std::cout << "3) Από το μαγαζί αγόρασαν" << clientCounter << "πελάτες" <<'\n';

  return 0;
}
