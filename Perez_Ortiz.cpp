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
    archivo = fopen("alumnos.txt", "w");

    char separador[5] = ":,\n";
    char calificaciones[20] = "";
    char nombre[100] = "";
    char contenido[1000];
    int conversion;

    if (archivo != NULL)
    {
        fputs("Luis Miguel: 7,6,5,3 \nPeter Parker: 9,10,10,10 \nIker Yandel: 5,5,10,10", archivo);
        fclose(archivo);
    }
    else
    {
        printf("Archivo no encontrado");
    }

    archivo = fopen("alumnos.txt", "r");
    if (archivo != NULL)
    {
        do
        {
            //printf("%s", contenido);
            char *token = strtok(contenido, separador);
            while (token != NULL)
            {
                printf("while in\n");
                printf("token%s\n", token);
                token = strtok(NULL, separador);
                strcat(nombre, contenido);
                if (strcmp(nombre, token) == 1)
                {
                    // strcat(nombre, token);
                    printf("nombre%s\n", nombre);
                }
                else
                {
                    sscanf(token, "d", &conversion);
                    printf("numeros%d", conversion);
                }
                // printf("nombre%s\n", nombre);
                printf("while off\n");
            }
        }while(fgets(contenido, 1000, archivo));
        printf("\n\n");
        rewind(archivo);
    }
    else
    {
        printf("Archivo no encontrado");
    }
}
