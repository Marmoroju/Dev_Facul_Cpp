#include <cstdio>
#include <conio.h>
#include <cstring>
//programa para manipular as informacoes de videos como no Youtube.

#define TAM 5
struct video_youtube
	{
		char nome[50];
		char canal[50];
		char conteudo[20];
		char link[100];				
	} video[TAM];

//recebe e cadastra as informacoess dos videos - OK
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
//imprime em tela as informacoes dos videos cadastrados - OK
void lista_video() { 
	
	int i, ref_video;
	for (i=0; i<TAM; i++)
	{
		ref_video = i+1; //indice do video
		printf("\n==========================");
		printf("\n==  INFO DO VIDEO %d     ==", ref_video);
		printf("\n==========================");
		printf("\nNome: %s", video[i].nome);
		printf("\nCanal: %s", video[i].canal);
		printf("\nConteudo: %s", video[i].conteudo);
		printf("\nLink: %s", video[i].link);
	}
	
}
//funcao de consulta com passagem de parametros :: auxiliar das funcoes consulta_ - OK ::: (servira para listar junto a posicao das funcoes _conteudo e _nome)
void apenas_consulta(int i) {
	
	    int ref_video;
	    	    	        	    	    
        ref_video = i; //indice do video
		printf("\n==========================");
		printf("\n==  INFO DO VIDEO %d     ==", ref_video + 1);
		printf("\n==========================");
		printf("\nNome: %s", video[i].nome);
		printf("\nCanal: %s", video[i].canal);
		printf("\nConteudo: %s", video[i].conteudo);
		printf("\nLink: %s", video[i].link);

}
//consulta por numero de referencia/indice do video - OK
void consulta_referencia() {
	
	int num, i;
		
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	getchar();
	i = num - 1;
		apenas_consulta(i);
}
//incompleto
void consulta_conteudo() {
	
	char cons_contd_video[20];
	int i;
	
	printf("\nDigite um conteudo: ");
	scanf("%[^\n]", &cons_contd_video);
	getchar();
		
						
	if (strcmp(video[i].conteudo, cons_contd_video)) {
		printf("\ndiferente.");
	}else {
		printf("\nigual");
	}	
			
}
//incompleto
void consulta_nome() {
	
	char consulta_nome_video[50];
					
	printf("\nDigite um nome: ");
	scanf("%[^\n]", &consulta_nome_video);
	getchar();
		
}
//menu de pesquisa da opcao [3] "Pesquisar Video" no Menu Principal	- OK
void consulta() {
	
	char cons;
	do {
		printf("\n==========================");
		printf("\n==     MENU DE BUSCA    ==");
		printf("\n==========================");
		printf("\n[1] Numero do Video:");
	//	printf("\n[2] Nome do conteudo:");
	//	printf("\n[3] Nome do Video:");
        printf("\n[0] Retornar ao Menu Inicial\n");
        cons = _getch();

        switch(cons) {
        
			case '1': consulta_referencia(); break;
		//	case '2': consulta_conteudo(); break;
		//	case '3': consulta_nome(); break;
		}        
    }
	while(cons != '0');
	
}
		
int main () {
    	
	//menu principal do programa 
	char op;
	do {
		printf("\n==========================");
		printf("\n==      MENU INICIAL   ==");
		printf("\n==========================");
		printf("\n[1] Cadastrar video");
        printf("\n[2] Listar videos cadastrados");
        printf("\n[3] Pesquisar Video");
        printf("\n[0] Sair\n");
        op = _getch();

        switch(op) {
        
			case '1': cadastra_video(); break;
			case '2': lista_video(); break;
			case '3': consulta(); break;
		}        
    }
	while(op != '0');
}




