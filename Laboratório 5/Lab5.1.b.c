#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main () {
 int i, n;
 n = 5;
/* Inicializando gerador de numeros aleatorios - usando
o relogio do computador como semente */
srand((unsigned) clock());
/* Escrevendo 5 numeros aleatorios entre 0 e 49 */
 for( i = 0 ; i < n ; i++ ) {
 printf("%d\n", rand() % 50);
 }
return(0);
}
