/*Autor: Perez Ortiz Luis Angel
 /\_/\
( o.o )
 > ^ <
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *archivo;

    archivo = fopen("entrada.txt", "w");

    char contenido[10000];
    char signos[] = {" ,./()"};
    char palabra1[100]={};
    char palabra2[100];
    int i, contador= 0;

    if(archivo != NULL)
    {
        fputs("Estimado director Gilberto Alejandro Garcia Guerra, buenos dias.\n\n"
              "El motivo de la presente es para solicitar la revalidacion y/o equivalencia de las materias que "
              "curse en mi antigua unidad academica. Durante este semestre, realice un cambio de carrera, "
              "pasando de la Unidad Profesional Interdisciplinaria de Energia y Movilidad (UPIEM), donde cursaba"
              " la carrera de Ingenieria en Sistemas Energeticos y Redes Inteligentes, a la Escuela Superior de"
              " Computo (ESCOM), en la cerrera de Ingenieria en Inteligencia Artificial.\n\n"
              "Lamentablemente, al realizar el cambio, no se me otorgo la revalidacion de algunas materias "
              "que ya habia cursado. En UPIEM curse tres semestres, mientras que en ESCOM estoy iniciando "
              "con el primero. A continuacion, le proporciono una tabla con las materias que solicito revalidar,"
              " junto con sus equivalentes en ESCOM.", archivo);
        fclose(archivo);
    }
    else
    {
        printf("Archivo no encontrado X_X");
    }

    fopen("entrada.txt", "r");
    while (fgets(contenido, 10000, archivo))
    {
        char *delimitador = strtok(contenido, signos);
        strcpy(palabra1, contenido);
        while (delimitador != NULL)
        {
            do
            {
                contador++;
            }
            while (delimitador = strtok(NULL, delimitador));
            // delimitador = strtok(NULL, delimitador);
        }
        printf("%s: %i\n", palabra1, contador);
        palabra1[14]={};
    }
}
