#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int a;
	int b;
	int resultado;

	system("cls");

    do {
        printf("\nIngrese 1 numero: ");
        scanf("%d",&a);
        printf("______________________________________\n");
		if(a==0) {
            printf("\nIngrese numero mayor a 0\n");
            printf("______________________________________\n");
		}
    } while(a==0);

    do {
        printf("\nIngrese 2 numero: ");
        scanf("%d",&b);
        printf("______________________________________\n");
		if(b==0) {
            printf("\nIngrese numero mayor a 0\n");
            printf("______________________________________\n");
		}
    } while(b==0);

	resultado=a-b;

	printf("______________________________________\n");
	printf("\nEl resultado es: %d \n",resultado);
	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	if(resultado<0){
        printf("\nResultado negativo \n");
	}
	printf("______________________________________\n\n\n\n");


	return 0;
}
