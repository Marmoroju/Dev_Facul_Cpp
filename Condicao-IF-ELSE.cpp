#include <cstdio>

/*int main ()
{
	int num;
	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &num);
	if (num>0)
		printf("\nO numero eh positivo");
	else
		printf("\nO numero NAO eh positivo");
}*/

/*int main ()
{
	int a, b;
	
	printf("\nDigite um numero: ");
	scanf("%d", &a);
	printf("\nDigite outro numero: ");
	scanf("%d", &b);
	if(a > b)
		printf("Maior=%d", a);
	else
		printf("Maior=%d", b);
}*/

int main ()
{
	int a, b, c;
	int aux;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a > b) { //primeiro teste
		
		aux = b;
		b = a;
		a = aux; 
	}
	if(b > c) { //segundo teste
		
		aux = c;
		c = b;
		b = aux;
	}
	if(a > b) { //terceiro teste
		
		aux = b;
		b = a;
		a= aux;
    }
    
    printf("%d < %d < %d", a, b, c);
}