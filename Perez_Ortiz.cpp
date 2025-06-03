//Autor: Perez Ortiz Luis Angel
//1. guardar en arreglo cuantas palabras
//2.guardar en otro arreglo la palabra y cuantas veces aparece esa palabra
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char url[1000];
	char urlSegura[10] = "https";
	printf("ingresa el link a verificar:\n");
	scanf("%s", &url);
	char *esSegura = strstr(url, urlSegura);
	if (esSegura != NULL)
	{
		printf("Date bro el sitio es seguro");
	}
	else
	{
		printf("Mucho ojo el sitio no es seguro");
	}
	return 0;
}

