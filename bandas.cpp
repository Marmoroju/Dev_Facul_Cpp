#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct
{
    char nome[20];
    char tipo[15];
    int integrantes,posicao;
} BANDAS[TAM];

void ler (BANDAS *banda);
void mostrar (BANDAS banda);

int main()
{
    BANDAS banda;

    ler (&banda);
    mostrar(banda);
    getchar();
    return 0;
}

void ler (BANDAS *banda)
{
    int i;
    for (i=0; i<TAM; i++)
    {
        printf("Diga qual o nome da banda: ");
        gets((*banda)[i].nome);
        printf("Tipo de musica: ");
        gets ((*banda)[i].tipo);
        printf("Quantos integrantes tem a banda: ");
        scanf("%d",&(*banda)[i].integrantes);    
        printf("Posicao no seu top 5: ");
        scanf("%d",&(*banda)[i].posicao);    
        getchar();
    }    
}

void mostrar (BANDAS banda)
{
    int i;
    for (i=0; i<TAM; i++)
    {
        printf ("Nome: %s\n",banda[i].nome);
        printf ("Tipo de musica: %s\n",banda[i].tipo);
        printf ("Numero de integrantes: %d \n",banda[i].integrantes);
        printf ("Posicao no seu TOP 5: %d \n",banda[i].posicao);
    }
}