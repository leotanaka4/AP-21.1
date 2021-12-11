#include <stdio.h>


int main(){
  int a = 0;
  int b = 0;
  int c = 0;
  char op = 0;
  do{
  printf("Digite um numero, a operacao que vc deseja e outro numero:\n");
  scanf("%i %c %i", &a, &op, &b);
  switch(op){
    case '+':
        printf("%i + %i = %i\n", a, b, a + b);
        break;
        case '-':
        printf("%i - %i = %i\n", a, b, a - b);
        break;
        case '*':
        printf("%i * %i = %i\n", a, b, a * b);
        break;
        case '/':
        printf("%i / %i = %.2f\n", a, b, (float) a / (float) b);
        break;
        default:
        printf("Sinal nao identificado\n");
        break;
    }
    printf("Se deseja continuar digite 1:\n");
    scanf("%i", &c);
  }while (c==1);
  return 0;
}
