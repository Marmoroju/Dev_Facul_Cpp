#include <stdio.h>
#include <stdlib.h>

#define TAM 2

typedef struct
{
    char nome[20];
    char canal[15];
    char conteudo[15];
    char link[50];    
} VIDEO[TAM];

void ler (VIDEO *video);
void mostrar (VIDEO video);

int main()
{
    VIDEO video;

    ler (&video);
    mostrar(video);
    getchar();
    return 0;
}

void ler (VIDEO *video)
{
    int i;
    for (i=0; i<TAM; i++)
    {
        printf("Nome do video: ");
        gets((*video)[i].nome);
        printf("Nome do canal: ");
        gets ((*video)[i].canal);
        printf("Conteudo do canal: ");
        scanf("%s",&(*video)[i].conteudo);    
        printf("Link do video: ");
        scanf("%s",&(*video)[i].link);    
        getchar();
    }    
}

void mostrar (VIDEO video)
{
    int i;
    for (i=0; i<TAM; i++)
    {
        printf ("Nome: %s\n",video[i].nome);
        printf ("Nome do canal: %s\n",video[i].canal);
        printf ("Conteudo do canal: %s \n",video[i].conteudo);
        printf ("Link do video: %s \n",video[i].link);
    }
}