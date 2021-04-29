#include "problemas.h"

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

int menu_entrada()
{
    int Entrada;
    cout << "Ingrese el numero del problema: "; cin >> Entrada;
    return Entrada;
}

int recursiva(int fnodo, int cnodo, int v, int nodos)
{
    bool caminos[2]; //caminos[0] si hay mov. a la derecha y caminos[1] si hay mov. hacia abajo
    caminos[0]=(cnodo<v-1);
    caminos[1]=(fnodo<v-1);
    if(fnodo==v-1 && cnodo==v-1) nodos++;
    if(caminos[0]) nodos=recursiva(fnodo,cnodo+1,v, nodos);
    if(caminos[1]) nodos=recursiva(fnodo+1,cnodo,v, nodos);
    return nodos;
}

long long factorial(int n)
{
    long long int fact=1;
    for(;n>1;n--) fact*=n;
    return fact;
}

char *permutaciones(int y, int num)
{
   int grupo;
   char combina[]="0123456789";
   static char permuta[11];
   permuta[10]='\0';

   for(;num>=1;num--){
       grupo=y/factorial(num-1);
       permuta[10-num]=combina[grupo];
       eliminar(combina,grupo);
       y%=factorial(num-1);
   }
   return permuta;
}

void eliminar(char *p, int n)
{
   for(int i=n; p[i]!='\0';i++)  p[i]=p[i+1];
}

