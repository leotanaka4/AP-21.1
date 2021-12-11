#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main () {
 int i, n;
 clock_t t; // tipo especial que repr. o relogio da UCP
 n = 5;
/* Inicializando gerador de numeros aleatorios - usando o
relogio da UCP como semente */
 srand((unsigned) clock());
/* Escrevendo 5 numeros aleatorios entre 0 e 49 */
 for( i = 0 ; i < n ; i++ ) {
 printf("%d\n", rand() % 50); }
return(0); }
