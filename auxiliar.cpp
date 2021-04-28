#include "auxiliar.h"
#include "problemas.h"

int menu_entrada(){
    int Entrada;
    cout << "Ingrese el numero del problema: "; cin >> Entrada;
    return Entrada;
}

// Ejercicio 2
// & ---> Dirección de una variable.
void fun_c(double *a, int n, double *promedio, double *suma){ //Paso de parámetros por referencia
    int i;
    *suma = 0.0;
    for (i = 0; i < n; i++)
        *suma += *(a + i);
    *promedio = *suma / n;
}

/* Caso de prueba:
    Si se ejecuta en el main, declarar la función así: ---> void fun_c(double *a, int n, double *promedio, double *suma);

    double arreglo[3]={7,8,9};
    double a = 0, b = 0;
    double *promedio = &a;
    double *suma = &b;
    fun_c(arreglo, 3, promedio, suma);
    cout << "El promedio es: " << *promedio << endl;

    Resultado = 8.
*/

// **********************************************************************************************************************

/* Ejercicio 4:

  https://www.tinkercad.com/things/4JmmTwLCNxZ

*/



