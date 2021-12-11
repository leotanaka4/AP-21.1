#include <stdio.h>
#include <stdlib.h>

//busca o valor 'key' no vetor 'a'
int linearSearch(int a[], int size, int key) {
    int i;
    for (i = 0; i < size; i++) {
        if (a[i] == key) {
            return i;//valor encontrado, retorna o índice
        }
    }
    return -1;//valor não encontrado
}

//Código de testes
int main() {
    int a[] = {2, 3, 8, -1, -4, 20, 0, 5};
    int size = 8;
    printf("Key = 20, Index = %d\n", linearSearch(a, size, 20));
    printf("Key = 9, Index = %d", linearSearch(a, size, 9));
    return 0;
}
