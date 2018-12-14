#include <stdio.h>
int main() {

  int p, e;
  float tb;

  printf("Me afto to programa tha mporeis na ypologiseis an perases to mathima\ndinontas toys dyo vathmous sou\nproodo kai telikh eksetash \n");
  printf("as ksekinisoume me ton proto vathmo\n");
  printf("dwse ton vathmo pou egrapses sth proodo kai pata enter\n");

  scanf("%d", &p);

  printf("dwse ton vathmo pou egrapses sthn telikh eksetash kai pata enter\n");
  scanf("%d", &e);

  tb = 0.4*p + 0.6*e;

  if (tb>=5) {
    printf("o telios sou bathmos einai %.0f\n", tb);
    printf("Proagesai\n");
  } else {
    printf("o telikos sou vathmos einai %.0f", tb);
    printf("aporiptesai\n");
  }

  return 0;
}
