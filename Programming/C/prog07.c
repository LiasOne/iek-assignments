// prog07.c - εμφανίζει τον κωδικό αριθμό κάποιου χαρακτήρα

#include <stdio.h>

int main()
{
  char ch;

  printf("Δώστε έναν χαρακτήρα: \n");
  scanf("%c", &ch);
  printf("Ο κώδικας του %c είναι το %d. \n", ch, ch);

}
