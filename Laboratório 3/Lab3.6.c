#include <stdio.h>

int main(){
  char ch1, ch2, ch3, ch4;
  unsigned int num;
  ch1 = 'B';
  ch2 = 66;
  ch3 = '\102';
  ch4 = '\X42';
  printf("ch1 = %c, ch2 = %c, ch3 = %c, ch4 = %c\n", ch1, ch2, ch3, ch4);
  printf("ch1 + 2 = %c, ch1 + 2 = %i\n ", ch1+2, (int) ch1+2);
  printf("\nEntre valor inteiro entre 0 a 255 : ");
  scanf("%i", &num);
  printf("\nO valor lido corresponde ao caractere = %c", (char) num);
  return 0;
}
