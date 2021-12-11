#include <stdio.h>
#include <stdlib.h>

int main(){
  char
  fopen(<nome do arquivo>, <modo>);
  fclose(<pt_arquivo);
  putc(<caractere>, <pt_arquivo>);
  fputc(<caractere>, <pt_arquivo>);
  do {
    var = fgetc(<pt_arquivo>);
  } while (var != EOF);
  fgets(string, lenght, pt_arquivo);
  fputs(string, pt_arquivo);
  fread(buffer, no_bytes, no_itens, pt_arq);
  fwrite(buffer, no_bytes, no_itens, pt_arq);
  fprintf(pt_arq, string_controle, argumentos);
  fscanf(pt_arq, string_controle, argumentos);
  fseek(pt_arq, no_bytes, origem);

  return 0;
}
