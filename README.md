# fila

Testando se minha declaração de typedef e struc functiona
```c
#include<stdio.h>
#include<string.h>

typedef struct {
    int codigo;
} TProduto;

void main () {
}
```

Testando se consigo imprimir todos da fila
```c
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
```

Testando se consigo alterar os valores da fila
```c
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
```

Testando se consigo escolher a menor
```c
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

void menorFila() {
  int menorIndice = 0;
  int menorCodigo = fila[0].codigo;

  for (int i = 0; i < 4; i++) {
    if (fila[i].codigo < menorCodigo) {
      menorCodigo = fila[i].codigo;
      menorIndice = i;
    }
  }

  printf("menorCodigo: %d\n", menorCodigo);
  printf("menorIndice: %d\n", menorIndice);
}

void main () {
  fila[0].codigo = 3;
  fila[1].codigo = 2;
  fila[2].codigo = 2;
  fila[3].codigo = 3;

  imprimeFila();
  menorFila();
}
```
