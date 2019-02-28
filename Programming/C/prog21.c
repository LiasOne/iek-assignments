#include <stdio.h>

int main()
{
  int table[] = {10,2,-7,9,-3,8,45,-98,9,10};
  int table1[10];
  int table2[10];
  int k = 0, i;
  int j = 0;
  printf("diaxorizw tis perites me tis arties times\n");
  for(i = 0; i < 10; i++)
  if (table[i] %2 == 0) {
    table1[k] = table[i];
    k++;
    }
    else
    {
table[j] = table[i];
    }

  printf("o pinakas einai:\n");
  for (i = 0; i<10; i++)
  printf("%d\n", table[i]);
  printf("o pinakas1 einai:\n");
  for (i = 0; i<10; i++)
  printf("%d\n", table[i]);
  printf("o pinakas2 einai:\n");
  for (i = 0; i<10; i++)
  printf("%d\n", table2[i]);
  return 0;
}
