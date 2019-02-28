#include <stdio.h>

int main()
  {
    int table[10]={10,2,-7,9,-3,8,45,-98,9,10};
    int table1[10];
    int table2[10];

    int k=0, i;
    int j=0;

    printf("diaxwrizw tis perites me tis arties times\n");

    for (i = 0; i < 10; i++)

    if (table[i]%2==0){
      table1[k]=table[i];
      k++;
    }
    else
    {
      table2[j]=table[i];
      j++;
    }

    printf("O pinakas einai:\n");
    for (i = 0; i < 10; i++)
    printf("%d\n",table[i]);

    printf("O pinakas1 einai:\n");
    for (i = 0; i < 10; i++)
    printf("%d\n",table1[i]);

    printf("O pinakas2 einai:\n");
    for (i = 0; i < 10; i++)
    printf("%d\n",table2[i]);

    return 0;
  }
