// Να γραφτεί πρόγραμμα το οποίο να αναγνωρίζει αν κάποιος χαρακτήρας είναι ψηφίο, κεφαλαίο γράμμα ή μικρό γράμμα

#include <stdio.h>

int main() {
  char inputedCharacter;

  printf("Δώστε έναν χαρακτήρα: ");

  scanf("%c", &inputedCharacter);

  if ((inputedCharacter >= '0') && (inputedCharacter <= '9')) {
    printf("Ο χαρακτήρας αυτός είναι ψηφίο\n");
  }
  else if (inputedCharacter >= 'A' && inputedCharacter <= 'Z') {
    printf("Ο χαρακτήρας αυτός είναι κεφαλαίο γράμμα\n");
    }
  else if (inputedCharacter >= 'a' && inputedCharacter <= 'z') {
    printf("Ο χαρακτήρας είναι μικρό γράμμα\n");
    }
  else {
    printf("Άλλος χαρακτήρας\n");
  }
  return 0;
}
