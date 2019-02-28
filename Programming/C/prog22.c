/*εύρεση μεγαλύτερου και μικρότερου βαθμού 10 μαθη-
τών και ποιοι μαθητές έχουν τους βαθμούς αυτούς */

#include <stdio.h>
int main()
{
   int a[10], i, max, min, i_max, i_min;
   // καταχώρηση βαθμών

  for (i=0; i<10; i++)
    do {
     printf("\nΔώσε τον %dο βαθμό : ", i);
     scanf("%d", &a[i]);
    } while (a[i] < 0 || a[i] > 20);

  max = a[0];
  min = a[0];
  i_max = 0;
  i_min = 0;

  for (i=1; i<10; i++) {
      if (a[i] > max) {
          max = a[i];
          i_max = i;
      }

	  if (a[i] < min) {
        min = a[i];
        i_min = i;
    }
  }/* end of for */

   printf("\nΟ μαθητής Νο %d έχει τον μεγαλύτερο βαθμό : %d", i_max, max);
   printf("\nΟ μαθητής Νο %d έχει τον μικρότερο βαθμό : %d", i_min, min);
   scanf("%d", &i);

}/* end of main */
