#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  char *str;
  /*Criar String str*/
  str = (char*) malloc(10);
  /*Colocar "Maria" na String str*/
  strcpy(str, "Maria");
  printf("String: %s\nEndereço:%p\n", str, str);
  str = (char*) realloc(str, 100);
  printf("String: %s\nEndereço:%p\n", str, str);
  /*Liberar memória*/
  free(str);
  return 0;
}
