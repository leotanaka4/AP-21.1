#include <stdio.h>
int soma (int num1, int num2) {
 return num1+num2; }
int main() {
/* As 2 linhas seguintes poderiam ser escritas como um unico comando:
 * void (*fun_ptr)(int) = &fun;
 */
 int (*f2p) (int, int);
 f2p = soma;
 // Chamando a funcao soma usando ponteiro
 int op1 = f2p(10, 13);
 //Chamando a funcao soma usando o seu nome
 int op2 = soma(11, 13);
 printf("Output1: Chamada usando ponteiro para funcao: %d",op1);
 printf("\nOutput2: Chamada usando nome da funcao: %d", op2);
 return 0; }
