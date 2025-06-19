/*Autor: Perez Ortiz Luis Angel
 /\_/\
( o.o )
 > ^ <
 */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//struc con palabra y su frecuencia
#define MAX_LEN_PALABRA 50

struct DetalleDePalabra
{
    char palabra[MAX_LEN_PALABRA];
    int frecuencia;
};
//nodo para crear la pila con detalle de palabra y puntero a otro nodo
struct nodo
{
    struct DetalleDePalabra detalleDePalabra;
    struct nodo *siguiente;
};

void agregar(struct DetalleDePalabra detalleDePalabra);
void agregarPalabra(char palabra[MAX_LEN_PALABRA]);
void imprimir(void);

struct nodo *superior = NULL;

int main(void)\
{
    FILE *archivo;
    archivo = fopen("entrada.txt", "w");

    char contenido[10000];
    char signos[] = ",./() \n";

    if(archivo != NULL)
    {
        fputs("Estimado director Gilberto Alejandro Garcia Guerra, buenos dias. "
              "El motivo de la presente es para solicitar la revalidacion y/o equivalencia de las materias que "
              "curse en mi antigua unidad academica. Durante este semestre, realice un cambio de carrera, "
              "pasando de la Unidad Profesional Interdisciplinaria de Energia y Movilidad (UPIEM), donde cursaba"
              " la carrera de Ingenieria en Sistemas Energeticos y Redes Inteligentes, a la Escuela Superior de"
              " Computo (ESCOM), en la cerrera de Ingenieria en Inteligencia Artificial. "
              "Lamentablemente, al realizar el cambio, no se me otorgo la revalidacion de algunas materias "
              "que ya habia cursado. En UPIEM curse tres semestres, mientras que en ESCOM estoy iniciando "
              "con el primero. A continuacion, le proporciono una tabla con las materias que solicito revalidar,"
              " junto con sus equivalentes en ESCOM.", archivo);
        fclose(archivo);
    }
    else
    {
        printf("Archivo no encontrado X_X");
        return 1;
    }

    archivo = fopen("entrada.txt", "r");
    if (archivo != NULL)
    {
        while(fgets(contenido, 10000, archivo))
        {
        }
    }
    else
    {
        printf("Archivo no encontrado X_X\n");
        return 1;
    }
    freopen("salida.txt", "a+", stdout);
    char *token = strtok(contenido, signos);
    while (token != NULL)
    {
        agregarPalabra(token);
        token = strtok(NULL, signos);
    }
    imprimir();
}


//agregar la pila(push) agrega un struct
void agregar(struct DetalleDePalabra detalleDePalabra)
{
    //reservamor memoria
    struct nodo *nuevoNodo = static_cast<struct nodo*>(malloc(sizeof(struct nodo)));
    //le ponemos el dato
    nuevoNodo->detalleDePalabra = detalleDePalabra;
    //el nuevo ndo es el superior, y su siguiente es el que era antes superior
    nuevoNodo->siguiente = superior;
    superior = nuevoNodo;
}
//insertar palabra en la pila en caso de que no exista
void agregarPalabra(char palabra[MAX_LEN_PALABRA])
{
    struct nodo *temporal = superior;
    while (temporal != NULL)
    {
        //comprobar si la encontramos
        int resultadoDeComparacion = strcasecmp(temporal->detalleDePalabra.palabra, palabra);
        //si es 0 entonces si
        if (resultadoDeComparacion == 0)
        {
            //aumentar frecuencia y terminar ciclo y funcion
            temporal->detalleDePalabra.frecuencia++;
            return;
        }
        temporal = temporal->siguiente;
    }
    //si no encontramos nadota agregamos una nueva
    struct DetalleDePalabra detalleDePalabra;
    strcpy(detalleDePalabra.palabra, palabra);
    detalleDePalabra.frecuencia = 1; //la primera vez es 1
    agregar(detalleDePalabra);
}

//imprimir resultados del conteo
void imprimir(void)
{
    char guiones[] = "--------------------";
    printf("+%s+%s+\n", guiones, guiones);
    printf("|%-20s|%-20s|\n", "PALABRA", "FRECUENCIA");
    printf("+%s+%s+\n", guiones, guiones);

    struct nodo *temporal = superior;
    while (temporal != NULL)
    {
        printf("|%-20s|%-20d|\n", temporal->detalleDePalabra.palabra, temporal->detalleDePalabra.frecuencia);
        temporal = temporal->siguiente;
    }
    printf("+%s+%s+\n", guiones, guiones);
}