#include<stdio.h>
#include<string.h>

typedef struct TProduto {
    int codigo;
    char nome[120];
    int estoque;
    float valor; 
} TProduto;

TProduto Prod[4];
int OPT, i;
float menor, maior;
char prod_menor[120], prod_maior[120];

int main() {

    for (i = 0; i < 4; i++) {
         Prod[i].codigo = 0;
         strcpy (Prod[i].nome, "NULL");
	 Prod[i].estoque = 0;
         Prod[i].valor = 0.0;
    }
    
    printf ("Escolha uma das opções a seguir:");
    printf ("1 - Inserir produtos");
    printf ("2 - Procurar produto de maior valor");
    printf ("3 - Procurar produto de menor valor");
    printf ("4 - Procurar produtos com estoque zerado");
    printf ("9 - Sair");
    scanf ("%d", &OPT);

    while (OPT != 9) {

        switch (OPT) {
            case 1: 
                for (i = 0; i <= 3; i++) {
                    printf ("Digite o código do produto: ");
                    scanf ("%d%*c", &Prod[i].codigo);
                    printf ("Digite o nome do produto: ");
                    scanf ("%s%*c", &Prod[i].nome);
                    printf ("Digite a quantidade do produto em estoque: ");
                    scanf ("%d%*c", &Prod[i].estoque);
                    printf ("Digite o valor do produto: ");
                    scanf ("%f%*c", &Prod[i].valor);
                } break;
           
            case 2: {
                menor = Prod[0].valor;
                prod_menor = Prod[0].nome;

                for (i = 1; i <= 3; i++) {
                    if (menor > Prod[i].valor) {
                        menor = Prod[i].valor;
                        prod_menor = Prod[i].nome;
                    }
                }
                printf ("\n O produto de menor valor é: %s; e seu valor é R$ %f", prod_menor, menor);
            } break;
            
            case 3: {
                maior = Prod[0].valor;
                prod_maior = Prod[0].nome;

                for (i = 1; i <= 3; i++) {
                    if (maior < Prod[i].valor) {
                        maior = Prod[i].valor;
                        prod_maior = Prod[i].nome;
                    }
                }
                printf ("\n O produto de maior valor é: %s; e seu valor é R$ %f", prod_maior, maior);
            } break;
            
            case 4: {

                for (i = 0; i <= 3; i++) {
                    if (Prod[i].estoque == 0)
                        printf ("\n O produto %s está com estoque zerado.", Prod[i].nome);
                }
            } break;

            default: printf ("Opção inválida!");
        }

        printf ("Para continuar, digite uma nova opção: ");
        scanf ("%d", &OPT);

    }

    printf("Fim do programa.");

    return 0

} 
