#include <stdio.h>
#include <stdlib.h>

void funcao_q_aloca(void) {
  /*aloca um vetor de 50 floats*/
  float *v = malloc(sizeof(float) * 50);
  /*... codigo que utilizaria vetor 'v' */
  /*retorna ao main, tendo esquecido de liberar atraves de free a mem. alocada pelo malloc */
}
int main(void) {
  int i;
  for(i=0;i<5;i++) {funcao_q_aloca();}
  /*o pojnteiro 'v' nao existe mais, entao nao pode ser liberado, mas a memoria continua alocada, dai o vazamento.*/
  return 0;
}
