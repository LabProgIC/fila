#include<stdio.h>
#include<string.h>

typedef struct {
    int codigo;
} TProduto;

TProduto fila[4];

void imprimeFila() {
  for (int i = 0; i < 4; i++) {
    printf("fila[%d].codigo = %d\n", i, fila[i].codigo);
  }
}

void main () {
  imprimeFila();
}
