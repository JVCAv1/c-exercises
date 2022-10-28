#include "stdio.h"
#include "stdlib.h"

int mult(int a,int b){

	int m;

	m = a * b;

	return m;
}

int main(int argc, char const *argv[]) {

	int a,b,m;

	printf("\na: ");
	scanf("%d",&a);
	printf("\nb: ");
	scanf("%d",&b);

	m = mult(a,b);

	printf("\n%d * %d = %d\n",a,b,m);

	return 0;
}
