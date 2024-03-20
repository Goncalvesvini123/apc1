#include <stdio.h>

 int main() {
  printf("----------------------------------\n");
  printf("        N O T A   L E G A L       \n");
  prntf("----------------------------------\n");
  printf("ITEM              QTD      VALOR  \n");
  printf("%-16s %3i %11.2f\n" , "Banana", 1, 1.50);
  printf("%-16s %3i %11.2f\n" , "Laranja", 5, 2.00);
  printf("%-16s %3i %11.2f\n" , "qjo 500g", 2, 25.00);
  printf("%-16s %3i %11.2f\n" , "pizza sadia", 2, 35.90);
  printf("----------------------------------\n");
  printf("TOTAL              11              145.30\n");

  return 0;
 }