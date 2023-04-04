#include <cstdio>

int main ()
{
	int n; //entrada
	int u, d, c, m, z; //saída
	
	printf("\nEntre com um numero inteiro: ");
	scanf("%d", &n);
	u = n % 10;
	n = n / 10;
	d = n % 10;
	n = n / 10;
	c = n % 10;
	n = n / 10;
	m = n % 10;
	n = n / 10;
	z = n % 10;
	printf("%d %d %d %d %d", z, m, c, d, u);
}