#include <stdio.h>
#include <stdlib.h>

#define n 10
#define letra 90

struct nombre{
	int variable_1;
	int variable_n[n];
};
typedef struct nombre estructura1;

void sumatoria(int *numeros,int tamano,int *resultado){
	int i;
	*resultado=0;
	for(i=0;i<tamano;i++){
		*resultado=*resultado+numeros[i];
	}
}

int main(){
	int *arreglo_enteros;
	char *arreglo_caracteres;
	int i;
	estructura1 arreglo[10];
	int resultado;


	arreglo[0].variable_1=1;
	arreglo[0].variable_n[0]=1;

	arreglo_enteros=malloc(sizeof(int)*(n+5));
	arreglo_caracteres=malloc(sizeof(char)*(n+5));

	for(i=0;i<n+5;i++){
		arreglo_enteros[i]=i;
	}
	for(i=0;i<n+5;i++){
		printf("%i-",arreglo_enteros[i]);
	}
	printf("\b \n");

	for(i=letra;i<(letra+n+5);i++){
		arreglo_caracteres[i-letra]=i;
	}
	for(i=0;i<(n+5);i++){
		printf("%c-",arreglo_caracteres[i]);
	}
	printf("\b \n");

	sumatoria(arreglo_enteros,15,&resultado);
	printf("%i\n", resultado);

	free(arreglo_enteros);
	free(arreglo_caracteres);
	return 0;
}