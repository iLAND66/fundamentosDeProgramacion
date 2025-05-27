//Autor: Perez Ortiz Luis Angel
#include <stdio.h>
#include <string.h>

int main() {
    char nombre[50], apellido[50];
    char mensaje[200];

    printf("Ingresa tu nombre: \n");
    scanf("%s", nombre);

    printf("Ingresa tu apellido: \n");
    scanf("%s", apellido);

    // Construimos el mensaje
    strcpy(mensaje, "Bienvenido, ");
    strcat(mensaje, nombre);
    strcat(mensaje, " ");
    strcat(mensaje, apellido);
    strcat(mensaje, "!");

    // Mostrar el mensaje y su longitud
    printf("\n%s\n", mensaje);
    printf("Longitud del mensaje: %lu caracteres\n", strlen(mensaje));

    return 0;
}
