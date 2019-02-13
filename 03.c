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
  fila[0].codigo = 3;
  fila[1].codigo = 2;
  fila[2].codigo = 2;
  fila[3].codigo = 1;

  imprimeFila();
}
