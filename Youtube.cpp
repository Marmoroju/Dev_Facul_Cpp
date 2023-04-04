#include <cstdio>
#include <conio.h>
//programa para manipular as informacoes de videos como no Youtube.

#define TAM 2
struct video_youtube
	{
		char nome[50];
		char canal[50];
		char conteudo[20];
		char link[100];				
	} video[TAM];

//recebe e cadastra as informações dos vídeos
void cadastra_video() { 
	
	int i, j;
	for (i=0; i<TAM; i++)
	{		
		j = i + 1; //indice do video
		printf("\n==========================");
		printf("\n==  CADASTRO DO VIDEO %d ==", j);
		printf("\n==========================");
		printf("\nQual o nome do video? ");
		scanf("%[^\n]", video[i].nome);
		getchar();
		printf("\nQual o nome do canal? ");
		scanf("%[^\n]", video[i].canal);
		getchar();
		printf("\nQual o conteudo do video? ");
		scanf("%[^\n]", video[i].conteudo);
		getchar();
		printf("\nQual o link do video? ");
		scanf("%[^\n]", video[i].link);
		getchar();
	}
	
}
//imprime em tela as informacoes dos videos cadastrados
void lista_video() { 
	
	int i, k;
	for (i=0; i<TAM; i++)
	{
		k = i +1; //indice do video
		printf("\n==========================");
		printf("\n==  INFO DOS VIDEOS %d   ==", k);
		printf("\n==========================");
		printf("\nO nome do video eh: %s", video[i].nome);
		printf("\nO nome do canal eh: %s", video[i].canal);
		printf("\nO conteudo eh sobre: %s", video[i].conteudo);
		printf("\nO link do video eh: %s", video[i].link);
	}
}

void num_video () {
	
	int num;
	
	printf("\nDigite o numero do video: ");
	scanf("%d", &num);

}

void consulta_video() {
		
	char consulta_conteudo;
	do {
		printf("\n==========================");
		printf("\n==    MENU DE BUSCA    ==");
		printf("\n==========================");
		printf("\n[1] Numero do video");
        printf("\n[2] Conteudo");
 //       printf("\n[3] Pesquisar Video");
        printf("\n[0] Retornar ao Menu Inicial\n");
        consulta_conteudo = _getch();

        switch(consulta_conteudo) {
        
			case '1': num_video(); break;
		//	case '2': lista_video(); break;
		//	case '3': consulta_video(); break;
		}        
    }
	while(consulta_conteudo != '0');
	
}

void menu() {
	char op;
	do {
		printf("\n==========================");
		printf("\n==      MENU INICIAL   ==");
		printf("\n==========================");
		printf("\n[1] Cadastrar video");
        printf("\n[2] Listar video");
        printf("\n[3] Pesquisar Video");
        printf("\n[0] Sair\n");
        op = _getch();

        switch(op) {
        
			case '1': cadastra_video(); break;
			case '2': lista_video(); break;
			case '3': consulta_video(); break;
		}        
    }
	while(op != '0');
	
}
		
int main ()
{    	
	menu();
}




