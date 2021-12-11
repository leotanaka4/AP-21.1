#include <stdio.h>

int main(){
  int num1, num2, op;
  printf("Digite dois numeros inteiros:");
  scanf("%d %d", &num1, &num2);
  printf("Digite a operacao aritmetica(soma:0;diferenca:1;multiplicacao:2;divisao:3;):");
  scanf("%d", &op);
  if (op==0){printf("Soma = %d", num1+num2);}
  else if (op==1){printf("Diferenca = %d", num1-num2);}
  else if (op==2){printf("Multiplicacao = %d", num1*num2);}
  else if (op==3){printf("Divisao = %d", num1/num2);}
  return 0;
}
