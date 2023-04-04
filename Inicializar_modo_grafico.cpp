#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main ()
{
	int gdriver, gmode, errorcode;
	
	gdriver=DETECT;
	initgraph(&gdriver, &gmode, " ");
	errorcode=graphresult();
	
	if (errorcode !=0)
	{
		printf("Erro ao inicializar o modo grafico: %s\n", grapherrormsg(errorcode));
		printf("Pressione qualquer tecla para continuar...");
		getch();
		exit(1);
	}
	
	printf("Modo grafico inicializado com sucesso\n\n");
	getch();
	closegraph();
	return(0);
	
}