// ένα πρόγραμμα που καλεί μια συνάρτηση

#include <stdio.h>

void florina();
int prosthesi();

int main()
{
  printf("Θα καλέσω τη συνάρτηση της Φλώρινας.\n" );
  florina();

  printf("Η κλήση της συνάρτησης έγινε.\n");
  prosthesi();
}

void florina()
{
  printf("Γεια σας από Φλώρινα\n");
}

int prosthesi()
{
  int a, b;
  a = 5;
  b = 7;

  printf("%d + %d = %d \n", a, b, a + b);
return 0;
}
