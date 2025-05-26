// Autor: Luis Angel Perez Ortiz
//strcpy, strlen, strcat --> exponer
#include "stdio.h"
int main (void){
    int j;
    int i;
    for (i=0;i<1; i++)
    {
        printf("Hola\n");
		for(j=1;i<5;++j)
		{
		    printf("%d", &j);
		}
    }
    return 0;
}

#include <stdio.h>
int main (void)
{
    int i = 0, r=0, t, numero;
    printf("que numero\n");
    scanf("%d", &numero);
    printf("Hasta que numero");
    scanf("%d", &t);
    for (i=0;i<=t;i++)
    {
        r = numero*i;
        printf("%d * %d = %d\n", numero, t, r);
    }
    return 0;
}

#include <stdio.h>
int main (void)
{
    int i = 0;
    for (i=1;i<10;i++)
    {
        if (i==5)
        {
            printf("* \t");
        }
        else
        {
            printf("%i \t", i);
        }
    }
    return 0;
}

// Autor: Luis Angel Perez Ortiz

#include <stdio.h>
int main (void)
{
    int a, b, c, lim;
    printf("Hasta cual?\n");
    scanf("%d", &lim);
    for (a=1;a<=lim;a++)
    {
        printf("%d ", a);
        for (b=1;b<=lim;b++)
        {
            c = a+b;
            printf("%d = %d \n", b, c);
        }
    }
    return 0;
}

// Autor: Luis Angel Perez Ortiz

#include <stdio.h>
int main (void)
{
    int num1=0, num2=0, num3=0;
    printf("Dame un numero \n");
    scanf("%d", &num1);
    printf("Dame un numero \n");
    scanf("%d", &num2);
    printf("Dame un numero \n");
    scanf("%d", &num3);
    if (num1 < num2 && num2 < num3)
        printf("los numeros estan en orden ascendente");
    else if (num1 > num2 && num2 > num3)
        printf("los numeros estan en orden decreciente");
    else
        printf("los numeros estan en orden aleatorio");
    return 0;
}

// Autor: Luis Angel Perez Ortiz

#include <stdio.h>
int main (void)
{
    int lado1=0, lado2=0, lado3=0;
    printf("Escribe el valor de el primer lado \n");
    scanf("%d", &lado1);
    printf("Escribe el valor de el segundo lado \n");
    scanf("%d", &lado2);
    printf("Escribe el valor de el tercer lado \n");
    scanf("%d", &lado3);
    if (lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2)
        if (lado1 == lado2 && lado2 == lado3 && lado1 == lado3)
            printf("Es un triangulo equilatero");
        else if (lado1 == lado2 || lado3 == lado1 || lado2 == lado3)
            printf("Es un tringulo isoceles");
        else
            printf("Es un triangulo escaleno");
        else
            printf("los valores ingresados no corresponden a un triangulo");
    return 0;
}

// Autor: Luis Angel Perez Ortiz

#include <stdio.h>
int main (void)
{
    int i = 0, j = 0, N = 0;
    printf("Escribe el numero\n");
    scanf("%d", &N);
    if (N > 0)
    {
        for (i=1;i<=N;i++)
        {
            for (j=1;j<=N;j++)
            {
                printf("%d\n", j);
            }
            printf("\n");
        }
    }
    else if (N == 0)
        printf("El numero es igual a 0");
    else
        printf("El numero es negativo");
    return 0;
}//Correguir

#include <stdio.h>
int main (void)
{
    int a, i, j, k;
    char symbol[] = "*";
    printf("Da un numero entre 1 y 19\n");
    scanf("%d", &a);
    if (a > 0 && a != 0 && a < 20)
    {
        for(i=0;i<=a;i++)
        {
            for(j=0;j<i;j++){
                printf("%d%d,", i, j);
                //printf("*");
            }
            printf("\n");
        }
        for(i=a;i>=0;i--)
        {
            for(j=i;j>0;j--){
                printf("%d%d,", i, j);
            }
            printf("\n");
        }
    }
    else
        printf("El numero ingresado no cumple con las condiciones");
    return 0;
}

#include <stdio.h>
int main (void)
{
    int i;
    printf("Ingrese la nota del estudiante\n");
    scanf("%d", &i);
    if (i >= 90)
        printf("Facilote");
    else if (i >= 80)
        printf("Muy bien");
    else if (i >= 70)
        printf("Aprobado");
    else if (i >= 60)
        printf("Por poco");
    else
        printf("Reprobado");
    int edad;
    printf("\nCual es tu edad?\n");
    scanf("%d", &edad);
    if (edad < 12)
        printf("Nino");
    else if (edad > 12 && edad < 18)
        printf("Adolecente");
    else if (edad > 17 && edad< 60)
        printf("Adulto");
    else
        printf("Adulto mayor");
    return 0;
}

#include <stdio.h>
int main (void)
{
    int contador = 1;
    while (contador < 4)
    {
        printf("\t%i", contador);
        contador++;
    }
    return 33;
}

#include <stdio.h>
int main (void)
{
    int contador1 = 5;
    int contador2 = 1;
    while (contador1 > 0)
    {
        while (contador2 < 6)
        {
            printf("\t%i", contador1);
            printf("\t%i\n", contador2);
            contador2++;
            contador1--;
        }
    }
    return 33;
}

#include <stdio.h>
int main (void)
{
    int contador1 = 5;
    int contador2 = 1;
    while (contador1 > 0)
    {
        printf("\t%i\t%i\n", contador1, contador2);
        contador2++;
        contador1--;
    }
    return 33;
}

#include <stdio.h>
int main (void)
{
    int contador1 = 5, contador2 = 1;
    int a;
    while (contador1 > 0)
    {
        printf("%i\t", contador1);
        contador1--;
        if (contador1 < 3)
        {
            printf("%i\n", contador2);
            contador2++;
        }
        else
            printf("\n");
    }
    return 33;
}

#include <stdio.h>
#include <iostream>
int main (void)
{
    int opcion;
    printf("Programa X\n1. caso a\n2. caso b\n3. caso c\n4. salir\nQue opcion quieres?\n");
    scanf("%d", &opcion);
    while (opcion)
    {
        if (opcion <= 0 || opcion >= 5)
        {
            printf("Opcion incorrecta\n");
            system("pause");
        }
        else
        {
            if (opcion == 1)
            {
                printf("Entro a la opcion 1\n");
                system("pause");
            }
            if (opcion == 2)
            {
                printf("Entro a la opcion 2\n");
                system("pause");
            }
            if (opcion == 3)
            {
                printf("Entro a la opcion 3\n");
                system("pause");
            }
            if (opcion == 4)
                break;
        }
        printf("Programa X\n1. caso a\n2. caso b\n3. caso c\n4. salir\nQue opcion quieres?\n");
        scanf("%d", &opcion);
    }
    return 33;
}

#include <stdio.h>
#include <string.h>

int main (void)
{
    char usuario[10];
    char contraseña[10];
    char admin[] = "admin";
    char adminContras[] = "1111";
    int intentos = 1;
    int diasTrabajados, a;
    int salario = 0;
    printf("Inicia de sesion\n");
    printf("Usuario\n");
    scanf("%s", usuario);
    printf("Contrasena\n");
    scanf("%s", contraseña);
    while (intentos < 6)
    {
        if (strcmp(usuario, admin) == 1 && strcmp(contraseña, adminContras) == 1)
        {
            printf("Usuario y/o contrasena incorrecta");
        }
        else
        {
            printf("Bienvenido admin\nConsulta de salario\nCuantos dias has trabajado\n");
            scanf("%d", &diasTrabajados);
            for (diasTrabajados=diasTrabajados;diasTrabajados>=0;diasTrabajados-=10)
            {
                a=0;
                salario = a + 10;
                printf("%d\n", diasTrabajados);
            }
            printf("Tu salario es de %d", salario);
            break;
        }
        printf("\nInicia de sesion\n");
        printf("Usuario\n");

        scanf("%s", &usuario);
        printf("Contrasena\n");
        scanf("%s", &contraseña);
        intentos++;
        if (intentos == 5)
        {
            printf("Demaciados intentos\nIntentalo de nuevo en 5 minutos");
            break;
        }
    }

    return 33;
}

#include <stdio.h>
#include <iostream>

int funcionSuma (int num1,int num2);
int funcionResta (int num1,int num2);
int funcionMultiplicacion (int num1,int num2);
float funcionDivicion (float num1,float num2);

int funcionSuma(int num1, int num2)
{
    return num1 + num2;
}
int funcionResta(int num1, int num2)
{
    return num1 - num2;
}
int funcionMultiplicacion(int num1, int num2)
{
    return num1 * num2;
}
float funcionDivicion(float num1, float num2)
{
    if (num2 == 0)
    {
        printf("divicion por cero");
    }
    else
    {
        return num1 / num2;
    }
}

int main (void)
{
    int opcion = 0, num1 = 0, num2 = 0;
    printf("Programa Opereaciones\n"
           "1. Suma\n"
           "2. Resta\n"
           "3. Multiplicacion\n"
           "4. Salir\n"
           "Que opcion quieres?\n");
    scanf("%d", &opcion);
    while (opcion)
    {
        if (opcion <= 0 || opcion >= 5)
        {
            printf("Opcion incorrecta\n");
            system("pause");
        }
        else
        {
            if (opcion == 1)
            {
                printf("Ingresa 2 numeros\n");
                scanf("%i %i", &num1, &num2);
                int resultado = funcionSuma(num1, num2);
                printf("El resultado de la suma es %i\n", resultado);
                system("pause");
            }
            if (opcion == 2)
            {
                printf("Ingresa 2 numeros\n");
                scanf("%i %i", &num1, &num2);
                int resultado = funcionResta(num1, num2);
                printf("El resultado de la resta es %i\n", resultado);
                system("pause");
            }
            if (opcion == 3)
            {
                printf("Ingresa 2 numeros\n");
                scanf("%i %i", &num1, &num2);
                int resultado = funcionMultiplicacion(num1, num2);
                printf("El resultado de la multiplicacion es %i\n", resultado);
                system("pause");
            }
            if (opcion == 4)
                break;
        }
        printf("Programa Opereaciones\n"
           "1. Suma\n"
           "2. Resta\n"
           "3. Multiplicacion\n"
           "4. Salir\n"
           "Que opcion quieres?\n");
        scanf("%d", &opcion);
    }
    return 33;
}
int main(void)
{
    int opcion = 3;

    switch (opcion)
    {
    case 1: printf("Opcion 1");
        break;
    case 2: printf("Opcion 2");
        break;
    default: printf("Opcion invalida");
        break;
    }

    return 0;
}

#include <stdio.h>

int main(void)
{
    int contador;
    do
    {
        contador++;
        printf("\t%d|", contador);
    }
    while (contador < 5);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main(void)
{
    int cont=0, total=0;
    float prom=0;
    // int arreglo[5];
    //otra opcion para declarar arreglos
    int arreglo[]={3, 18, -20000, 1, 22500};
    arreglo[0]=3;
    arreglo[1]=18;
    arreglo[2]=-20000;
    arreglo[3]=1;
    arreglo[4]=22500;
    // printf("%d\n", arreglo[3]);
    // arreglo[3]=2;
    // printf("%d\n", arreglo[3]);
    // int suma = arreglo[0]+arreglo[1];
    // printf("%d\n", suma);
    // for(cont=0;cont<5;cont++)
    // {
    //     printf("\t%d",arreglo[cont]);
    // }
    while(cont<5)
    {
        if (arreglo[cont]>0)
        {
            total += arreglo[cont];
        }
        cont++;
    }
    prom=total/4;
    printf("%f",prom);
    printf("Dame el valor para [4]:\n");
    scanf("%d", &arreglo[4]);
    return 0;
}

#include <stdio.h>


int main(void)
{
    int op;
    char vocales[5]={'a', 'e', 'i', 'o', 'u'};
    printf("Ingresa tu letra: \n");
    scanf("%c", &op);
    switch (op)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Es vocal\n");
        break;
    default:
        printf("No es vocal");
        break;
    }
}

#include <stdio.h>
#include <cstdlib>

int main(void)
{
    int arreglo1[10], arreglo2[10], arreglo3[10];
    int i, total;
    float prom;
    srand(10);
    for (i = 0; i < 10; i++)
    {
        arreglo1[i] = rand() % 20 + 1;
        printf("|%d|\t", arreglo1[i]);
    }
    printf("--> Arreglo 1\n");
    for (i = 0; i < 10; i++)
    {
        arreglo2[i] = i;
        printf("|%d|\t", arreglo2[i]);
    }
    printf("--> Arreglo 2\n");
    for (i = 0; i < 10; i++)
    {
        arreglo3[i] = arreglo1[i] + arreglo2[i];
        printf("|%d|\t", arreglo3[i]);
    }
    printf("--> Arreglo 3\n");
    for (i=0;i<10;i++)
    {
        total += arreglo3[i];
    }
    prom = total/10;
    printf("Promedio del tercer arreglo: %f", prom);

    return 0;
}

//Autor: Perez Ortiz Luis Angel
#include <stdio.h>

int main(void)
{
    int sum1=0, sum2=0, i, sumt=0;
    int arreglo[2][6];
    float prom1=0.0, prom2=0.0;
    arreglo [0][0] = {1};
    arreglo [0][1] = {10};
    arreglo [0][2] = {9};
    arreglo [0][3] = {3};
    arreglo [0][4] = {4};
    arreglo [0][5] = {5};
    arreglo [1][0] = {16};
    arreglo [1][1] = {1};
    arreglo [1][2] = {3};
    arreglo [1][3] = {7};
    arreglo [1][4] = {11};
    arreglo [1][5] = {9};
    for (i=0;i<6;i++)
    {
        sum1 = sum1 + arreglo[0][i];
        sum2 = sum2 + arreglo[1][i];
    }
    printf("La suma de la primera fila es: %d\n", sum1);
    printf("La suma de la segunda fila es: %d\n", sum2);
    prom1 = sum1/6;
    printf("El promedio de la primera fila es: %f\n", prom1);
    prom2 = sum2/6;
    printf("El promedio de la segunda fila es: %f\n", prom2);
}

#include <stdio.h>

int main(void)
{
    int sum1=0, sum2=0, i, sumt=0;
    int arreglo[2][6];
    float prom1=0.0, prom2=0.0;
    arreglo [0][0] = {1};
    arreglo [0][1] = {10};
    arreglo [0][2] = {9};
    arreglo [0][3] = {3};
    arreglo [0][4] = {4};
    arreglo [0][5] = {5};
    arreglo [1][0] = {16};
    arreglo [1][1] = {1};
    arreglo [1][2] = {3};
    arreglo [1][3] = {7};
    arreglo [1][4] = {11};
    arreglo [1][5] = {9};
    for (i=0;i<6;i++)
    {
        sum1 = sum1 + arreglo[0][i];
        sum2 = sum2 + arreglo[1][i];
    }
    printf("La suma de la primera fila es: %d\n", sum1);
    printf("La suma de la segunda fila es: %d\n", sum2);
    prom1 = sum1/6;
    printf("El promedio de la primera fila es: %f\n", prom1);
    prom2 = sum2/6;
    printf("El promedio de la segunda fila es: %f\n", prom2);
}

//--------------------------------------------------------------------------------------------------------
int cant_alum, i, sum = 0, cal;
	float prom;

	printf("Promedio de calificaciones\n");

	int *arreglo_dinamico1;
	printf("Cuantos alumnos hay?\n");
	scanf("%i", &cant_alum);

	arreglo_dinamico1 = (int *) calloc(cant_alum, sizeof(int));
	if (arreglo_dinamico1 == NULL)
	{
		printf("¡No se pudo reservar memoria!\n");
	}
	else
	{
		for (i = 0; i < cant_alum; i++)
		{
			printf("Ingrese la calificacion del alumno %i: ", i + 1);
			scanf("%d", &cal);
			arreglo_dinamico1[i] = cal;
		}

		for (i = 0; i < cant_alum; i++)
		{
			sum += arreglo_dinamico1[i];
		}

		prom = (float)sum / cant_alum;
		printf("\nEl promedio de calificaciones es: %.2f\n", prom);
	}

	free(arreglo_dinamico1);
//--------------
int **arr_din, i, n = 10, m = 5;

arr_din = (int **) malloc(n * sizeof(int *));
for (i=0;i<n;i++)
    arr_din[i] = (int *) calloc(m, sizeof(int *));
arr_din[0][4] = 7;
printf("\t|%d|", arr_din[9][5]);
// arr_din[0] = (int *) calloc(1, sizeof(int));
// arr_din[1] = (int *) calloc(1, sizeof(int));
// arr_din[2] = (int *) calloc(1, sizeof(int));
// arr_din[3] = (int *) calloc(1, sizeof(int));
// arr_din[3][4] = 16;
// printf("\t|%d|", arr_din[3][4]);

int **arr_din, i, j, n, m=0;

	printf("Cuantas columnas?\n");
	scanf("%d", &n);
	arr_din = (int **) calloc(n, sizeof(int *));
	for (i=0;i<n;i++)
	{
		int k = 1;
		arr_din[i] = (int *) calloc(m, sizeof(int *));
		for (j=0;j<=i;j++)
		{
			arr_din[i][j] = k;
			k++;
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
			printf("|%d|\t", arr_din[i][j]);
		printf("\n");
	}

	free(arr_din);
