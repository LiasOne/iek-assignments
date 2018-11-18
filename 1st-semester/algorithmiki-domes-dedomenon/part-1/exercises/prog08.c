// prog08.c – τυπώνει τα μεγέθη των τύπων δεδομένων

#include <stdio.h>

int main()
{
  printf("Ο τύπος int έχει μέγεθος %d bytes.\n", sizeof(int));
  printf("Ο τύπος char έχει μέγεθος %d bytes.\n", sizeof(char));
  printf("Ο τύπος long έχει μέγεθος %d bytes.\n", sizeof(long));
  printf("Ο τύπος double έχει μέγεθος %d bytes.\n", sizeof(double));
}
