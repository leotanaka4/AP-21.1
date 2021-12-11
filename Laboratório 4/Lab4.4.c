#include <stdio.h>
int main()
{
  int m, dp=0, ds=0;
  printf("Digite a ordem da matriz: ");
  scanf("%i", &m);
  int matriz[m][m];
  int Tmatriz[m][m];
  if (m<0||m>30) {printf("Invalido\n");return 1;}
  printf("\nEscreva sua Matriz:\n");
  for (int i=0; i < m; i++)
  {
    for (int j=0; j<m; j++)
    {
      printf("Elemento [%i][%i]: ", i, j);
      scanf("%d", &matriz[i][j]);
      if (i==j) {dp += matriz[i][j];}
      if (i+j==m-1) {ds += matriz[i][j];}
    }
  }
  printf("\nSua matriz:\n");
  for (int i=0; i<m; i++)
  {
    for (int j=0; j<m; j++){printf("%d  ", matriz[i][j]);}
    printf("\n");
  }
  printf("\nSua transposta:\n");
  for (int i=0; i<m; i++)
  {
    for (int j=0; j<m; j++){Tmatriz[i][j] = matriz[j][i];printf("%d  ", Tmatriz[i][j]);}
    printf("\n");
  }
  printf("\nA diferenca entre as diagonais da matriz eh: %d\n", dp - ds);
  return 0;
}
