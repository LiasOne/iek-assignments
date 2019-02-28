#include <stdio.h>

int main() {


  float moto, autoMobile, truck, longTruck, sum, length;
  char type = 'start';
  char end = 'end';

  sum = 0;
  length = 0;
  moto = 1.30;
  autoMobile = 1.90;
  truck = 4.80;
  longTruck = 6.70;

  printf ("Για κάθε όχημα που περνά δώσε έναν χαρακτήρα με βάση τον παρακάτω πίνακα:\n");
  printf ("\nΜοτοσικλέτα: m \nΑυτοκίνητο: a \nΦορτηγό: f\n\n");

  printf ("Για βοήθεια και εμφάνιση περισσοτέρων ετολών \nπαρακαλώ γράψτε: h και πατήστε enter.\n\n");

  printf ("Δώσε τύπο οχήματος:\n");

  while (type != end) {

    scanf(" %c", &type);

    if (type == 'f') {

      printf ("Δώσε μήκος οχήματος: ");
      scanf(" %f", &length);

      if (length > 5) {
        printf ("Πληρωτέο ποσό: %.2f€\n", longTruck);
        sum += longTruck;
        printf ("Επόμενο οχήμα:\n");
      } else {
        printf ("Πληρωτέο ποσό: %.2f€\n", truck);
        sum += truck;
        printf ("Επόμενο οχήμα:\n");
      }
    }

    if (type == 'a') {
      printf ("Πληρωτέο ποσό: %.2f€\n", autoMobile);
      sum += autoMobile;
      printf ("Επόμενο οχήμα:\n");
    }
    if (type == 'm') {
      printf ("Πληρωτέο ποσό: %.2f€\n", moto);
      sum += moto;
      printf ("Επόμενο οχήμα:\n");
    }

    if (type == 'h') {
      printf("h       : εμφανίζει το μενού βοήθειας\n");
      printf("m       : για να δώσετε τιμή μοτοσικλετας\n");
      printf("a       : για να δώσετε τιμή αυτοκινήτου\n");
      printf("f       : για να δώσετε τιμή φορτηγού\n");
      printf("s       : για να δελιτε τα μέχρι τώρα έσοδα\n");
      printf("end     : τερματίζει το πρόγραμμα και σας εμφανίζει το σύνολο της σημερινής είσπραξης\n");
    }

    if (type == 's') {
      printf("Μέχρι τώρα έχετε εισπράξει: %.2f\n", sum);
    }
    if (type == end) {
      break;
    }
  }

  printf ("Το σύνολο της σημερινής είσπραξης είναι: %.2f€\n\n\n\n", sum);
  printf("######  #     #      ###\n");
  printf("#       ##    #     #   #\n");
  printf("#       # #   #    #     #\n");
  printf("#####   #  #  #   #       #\n");
  printf("#       #   # #    #     #\n");;
  printf("#       #    ##     #   #\n");
  printf("######  #     #      ###\n");
  return 0;
}
