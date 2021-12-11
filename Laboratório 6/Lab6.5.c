#include <stdio.h>
int n;
int fibonacci_recursivo(int n) {
  if (n==0) {return 0;}
  if (n==1) {return 1;}
  return (fibonacci_recursivo(n-1)+fibonacci_recursivo(n-2));
}
int main() {
  int i, N;
  printf("Limite da sequencia de fibonacci:\n");
  scanf("%d", &N);
  for (i=0;fibonacci_recursivo(i)<=N;i++)
  {printf("i = d%\n", n);printf("Fib = %d\n", fibonacci_recursivo(i));}
  return 0;
}
