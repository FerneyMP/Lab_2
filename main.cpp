#include "problemas.h"
#include "auxiliar.h"

int main()
{
    switch (menu_entrada()) {
    case 2:
        problema2();
        break;

    case 4:{
        char *cadena = new char[1];
        cout << "Ingrese una cadena de numeros: "; cin >> cadena;
        problema4(cadena);
        delete[] cadena;
        break;}

    case 6:{
        char *cadena = new char[0];
        cout << "Ingrese una cadena de caracteres: "; cin >> cadena;
        problema6(cadena);
        delete[] cadena;
        break;}

    case 8:{
        char *cadena1= new char[1];
        char *cadena2= new char[1];
        cout << "Ingrese una cadena de caracteres que contenga numeros: "; cin >> cadena1;
        problema8(cadena1, cadena2);
        delete[] cadena1;
        delete[] cadena2;
        break;}

    case 10:{
        char *cadena = new char[1];
        cout << "Ingrese un numero en el sistema romano: "; cin >> cadena;
        problema10(cadena);
        delete[] cadena;
        break;}

    case 12:{
        int MatOrd;
        cout << "Ingrese el orden de la matriz:" << endl;
        cout << "Ejemplo: si es una matriz 2x2 ingresar solo el 2." << endl;
        cin >> MatOrd;
        cout << "Matriz de orden: " << MatOrd << "x" << MatOrd << " ..." << endl;
        int **Matriz = new int *[MatOrd];
        for (int i=0; i<MatOrd; i++) *(Matriz+i) = new int[MatOrd];
        /*
         En una Matriz se cumple que:
         1. []--> Filas, 2. []-->Columnas
         */
        //For para rellenar los valores de la matriz
        for(int filas = 0; filas < MatOrd; filas++){
            for(int columnas = 0; columnas < MatOrd; columnas++){
                cout << "Ingrese los elementos de la matriz" << endl;
                cout << "Fila " << filas << " Columna " << columnas <<": ";  // Para indicarle al usuario en qué fila y columna está
                cin >> Matriz[filas][columnas];
            }
            cout << endl;
        }
        problema12(Matriz, MatOrd);
        delete[] Matriz;}

        break;
    case 14:
        problema14();
        break;
    case 16:
        int caminos, cuadricula;
        cout << "Ingrese el numero de cuadricula: "; cin >> cuadricula;
        caminos=problema16(cuadricula);
        cout << "El total de caminos es " << caminos << endl;

        break;
    case 18:
        char *p = new char[11];
        p[10]= '\0';
        int lexico_grafica;
        cout << "Ingrese un numero para hacer la combinacion lexico-grafica: "; cin >> lexico_grafica;
        problema18(p, lexico_grafica);
        cout << p << endl;
        break;
    }
    return 0;
}
