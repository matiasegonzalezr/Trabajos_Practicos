#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"
#include <string.h>

int main()
{
    float primerNumero;
    float segundoNumero;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    int factorial1;
    int factorial2;
    char salir = 'n';
    int opcion;
    int flag2;
    int flag1;
    flag1 = 0;
    flag2 = 0;


    do {
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
        printf("     >>> MENU CALCULADORA <<< \n\n");
        printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
        printf("1. Ingresar el 1er operando (A=%.2f)\n", primerNumero);
        printf("2. Ingresar el 2do operando (B=%.2f)\n", segundoNumero);
        printf("3. Calcular todas las operaciones: \n");
        printf("\t a) Sumar (%.2f + %.2f)\n", primerNumero, segundoNumero);
        printf("\t b) Restar (%.2f - %.2f)\n", primerNumero, segundoNumero);
        printf("\t c) Multiplicar (%.2f * %.2f)\n", primerNumero, segundoNumero);
        printf("\t d) Dividir (%.2f / %.2f)\n", primerNumero, segundoNumero);
        printf("\t e) Calcular factorial de !(%.2f) !(%.2f)\n", primerNumero, segundoNumero);
        printf("4. Mostrar todos los resultados: \n");
        printf("5. Salir.\n\n");
        printf("Su  opcion: ");
        scanf("%d", &opcion);
        printf("\n\n");


        switch (opcion)
        {
        case 1:
            flag1 = 1;
            printf("Ingrese el primer operando: ");
            scanf("%f", &primerNumero);
        case 2:
            flag2 = 1;
            printf("Ingrese el segundo operando: ");
            scanf("%f", &segundoNumero);
        case 3:
            if (primerNumero == 0 && segundoNumero == 0)
            {
                printf("ERROR. Se necesitan ambos operandos para comenzar a calcular. \n");
            }
            else
            {
            printf("Calculando operaciones...\n");
            suma = SumarNumeros(primerNumero, segundoNumero);
            resta = RestarNumeros(primerNumero, segundoNumero);
            multiplicacion = MultiplicarNumeros(primerNumero, segundoNumero);
            division = DividirNumeros(primerNumero, segundoNumero);
            factorial1 = CalcularFactorial(primerNumero);
            factorial2 = CalcularFactorial(segundoNumero);
            }
            break;
        case 4:
            if (flag1 != 0 && flag2 != 0)
            {
            printf("%.2f + %.2f = %.2f\n", primerNumero, segundoNumero, suma);
            printf("%.2f - %.2f = %.2f \n", primerNumero, segundoNumero, resta);
            printf("%.2f * %.2f = %.2f \n", primerNumero, segundoNumero, multiplicacion);
            printf("%.2f / %.2f = %f.2\n", primerNumero, segundoNumero, division);
            printf("el factorial del numero %.2f es %d\n", primerNumero, factorial1);
            printf("el factorial del numero %.2f es %d", segundoNumero, factorial2);
            }
            break;
        case 5:
            salir = 's';
            system("cls");
            break;
        default:
            printf("Por favor elija una opcion correcta. \n");
            break;
        }
        printf("\n\n");

    } while (salir != 's');

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
    printf("Gracias por usar la calculadora! \n\n");
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n");
    return 0;
}
