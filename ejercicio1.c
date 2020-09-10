#include <stdio.h>
#include <stdlib.h>
// %i variables enteras (utilizar & en scanf)
// %f variables reales (utilizar & en scanf)
// %c variables caracter (utilizar & en scanf)
// %s variables de cadenas de caracteres (no utilizar & en scanf y definir como char *)

int main(){
	int var_int;
	float var_float;
	char var_char;
	char *var_string = malloc(sizeof(char)*10);



	printf("Ingrese una palabra: \n");
	scanf("%s",var_string);
	printf("La palabra ingresada es: %s \n",var_string);
	return 0;
}