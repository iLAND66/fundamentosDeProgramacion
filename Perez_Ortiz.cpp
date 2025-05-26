//Autor: Perez Ortiz Luis Angel
//1. guardar en arreglo cuantas palabras
//2.guardar en otro arreglo la palabra y cuantas veces aparece se arreglo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *archivo;

	archivo = fopen("carta.txt", "r");
	if(archivo == NULL) {
		printf("Error: archivo no encontrado X_X!");
	}
	char info_carta[100];
	while (fgets(info_carta, 100, archivo))
	{
		
	}

	fclose(archivo);

	return 0;
}
