//Autor: Perez Ortiz Luis Angel
//1. guardar en arreglo cuantas palabras
//2.guardar en otro arreglo la palabra y cuantas veces aparece esa palabra
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	FILE *archivo;
	archivo = fopen("carta.txt", "r");

	if (archivo == NULL) {
		printf("Error: archivo no encontrado X_X!\n");
		return 1;
	}

	char info_carta[1000];
	char delimitadorsignos[] = ",;:. \n!\"'";
	char palabras[1000];
	int contador = 0;

	while (fgets(info_carta, sizeof(info_carta), archivo)) {
		char *delimitador = strtok(info_carta, delimitadorsignos);
		while (delimitador != NULL) {
			//strcpy(info_carta, palabras);
			contador++;
			delimitador = strtok(NULL, " ");
		}
	}
	printf("Numero de palabras: %d\n", contador);
	// int *repDePalabras;
	// repDePalabras = (int *) calloc(contador, sizeof(int));
	// if (repDePalabras == NULL)
	// {
	// 	printf("¡No se pudo reservar memoria!\n");
	// }
	// else
	// {
	// 	if (true)
	// 	{
	// 		printf("");
	// 	}
	// }

	fclose(archivo);
	return 0;
}

