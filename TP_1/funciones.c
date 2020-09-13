#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
/** \brief La función toma dos números ingresados por el usuario y los suma entre sí.
 *
 * \param numero correspondiente al primer operando
 * \param numero correspondiente al segundo operando
 * \return retorna el resultado
 *
 */
float SumarNumeros(float num1, float num2)
{
    float resultado;
    resultado = num1 + num2;
    return resultado;
}

/** \brief La función toma dos números ingresados por el usuario y los resta entre sí.
 *
 * \param numero correspondiente al primer operando.
 * \param numero correspondiente al segundo operando.
 * \return retorna el resultado.
 *
 */
float RestarNumeros(float num1, float num2)
{
    float resta;
    resta = num1 - num2;
    return resta;
}
/** \brief La función toma dos números ingresados por el usuario y los multiplica entre sí.
 *
 * \param numero correspondiente al primer operando.
 * \param numero correspondiente al segundo operando.
 * \return retorna el resultado.
 *
 */
float MultiplicarNumeros(float num1, float num2)
{
    float multiplicar;
    multiplicar = num1 * num2;
    return multiplicar;
}
/** \brief La función toma dos números ingresados por el usuario, y divide el primer número entre el segundo.
 *  el condicional IF valida que el resultado sea distinto de 0, ya que no se puede dividir por ese numero.
 * \param numero correspondiente al primer operando
 * \param numero correspondiente al segundo operando
 * \return retorna el resultado
 *
 */
float DividirNumeros(float num1, float num2)
{
    float dividir;
    if (num2 == 0)
    {
        printf("ERROR. Ingrese un número distinto de 0. \n");
    }
    else
    {
        dividir = num1 / num2;
    }

    return dividir;
}
/** \brief La función toma dos números ingresados por el usuario y calcula el factorial.
 *
 * \param numero correspondiente al primer operando.
 * \param numero correspondiente al segundo operando.
 * \return retorna el resultado.
 *
 */
double CalcularFactorial(double num1)
{
    int i;
    int factorial;


    if (num1 == 0)
    {
        factorial = 1;

        return factorial;
    }
    else
    {
        for (i = 1; i <= num1; i++)
        {
            factorial *= i;
        }
        return factorial;
    }

    return factorial;
}



