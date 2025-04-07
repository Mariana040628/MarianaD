#include<stdlib.h>
#include<stdio.h>

int main (){
	char letra=' ';
	
	printf("Ingresa una letra: ");
	scanf("%c",&letra);
	printf("El codigo ascii es %d\n", letra);
	//scanf("%c,&letra");
	do{
	printf("Ingresa una letra: ");
	}while(letra !='W');

	getch();
	return 0;
}
