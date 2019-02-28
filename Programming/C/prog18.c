#include <stdio.h>
#define STUD 10

int main() {

  int mathites [STUD];
  int min, max, studmin, studmax, i;


  printf("δωσε τους βαθμους 10 μαθητων για να δεις ποιοι εχουν τον μεγαλύτερο και μικρότερο βαθμό\n");

  for (i = 0; i < 10; i++) {

    do {
      scanf("%d\n", &mathites[i]);
    } while(mathites[i] < 0 || mathites[i]>20);
    }

  min = mathites[0];
  max = mathites[0];
  studmin = 0;
  studmax = 0;

  for (i = 1; i < 10; i++) {
    if (mathites[i] > max) {
      max = mathites[i];
      studmax = i;

    }
    if (mathites [i] < min) {
      min = mathites [i];
      studmin = i;
    }
  }
    printf("Τον μεγαλύτερο βαθμό έχει ο μαθητής %d \nΤον μικρότερο βαθμό εχει ο μαθητής %d \n", studmax, studmin);


  return 0;
}
