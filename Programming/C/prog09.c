//  prog09.c – τυπώνει τα μεγέθη των τύπων δεδομένων
#include <stdio.h>  //
#include <string.h>
int main()
{
  float waight;
  int size, letters;
  char name[40];

  printf("Γεια σου! Πώς λέγεσαι;\n");

  scanf("%s", name);
  printf("Ποιο είναι το βάρος σου σε κιλά %s;\n", name);

  scanf("%f", &waight);

  size = sizeof(name);
  letters = strlen(name);

  printf("Γεια σου, %s, το βάρος σου είναι %2.2f κιλά.\n", name, waight);
  printf("Επίσης, το όνομα σου έχει %d γράμματα,\n", letters);
  printf("και χρειάζονται %d bytes για την αποθήκευση του.\n", size);
}
