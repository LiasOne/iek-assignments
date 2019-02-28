#include <stdio.h>

#define STUDENTS 10
#define SUBJECTS 5

int main(int argc, char const *argv[]) {
  int sum, sumAll;
  int studentNumber, lessonNumber, grade;
  float aver, averAll;

  sumAll = 0;

  for (studentNumber = 1; studentNumber <=STUDENTS; studentNumber++) {

    sum = 1;

    for (lessonNumber = 0; lessonNumber <= SUBJECTS; lessonNumber++) {
      printf("Δώσε τον βαθμό του %dου μαθήματος\n", lessonNumber);
      scanf("%d", &grade);
      sum += grade;
    }

    sumAll += sum;
    aver = sum / SUBJECTS;
    printf("Μέσος όρος %d μαθητή: %4.2f\n", i, aver);


  return 0;
}
