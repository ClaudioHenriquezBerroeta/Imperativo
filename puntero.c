#include <stdio.h>
#include <stdlib.h>

int suma_normal(int a, int b){
  	return a+b;
}
void suma_puntero(int a, int b, int *resultado){
  	*resultado=a+b;
}
void acumulador(int *a, int b){
 	*a=*a+b;
}
void resta_puntero(int *a, int *b, int *resultado){
	*resultado=*a-*b;
  	*a=*a+5;
  	*b=*b*2;
}


int main(int argc, char const *argv[]){
	int *var_puntero;
	int var_normal;
  	int suma;
  	int result;
 	int *a;
 	int *b;

	var_puntero=malloc(sizeof(int));
	a=malloc(sizeof(int));
 	b=malloc(sizeof(int));

	var_normal=10;
	*var_puntero=20;
	printf("%i\n", var_normal);
	printf("%i\n", *var_puntero);


	suma=suma_normal(var_normal,*var_puntero);
  	printf("%i\n",suma);

  	suma_puntero(50,40,&suma);
  	printf("%i\n",suma);

  	acumulador(var_puntero,5);
  	printf("%i\n",*var_puntero);
  	*a=10;
  	*b=5;
  	resta_puntero(a,b,&result);
  	printf("%i\n",result);
  	printf("%i\n",*a);
  	printf("%i\n",*b);
  
  	free(var_puntero);
  	free(a);
  	free(b);
  	return 0;
}