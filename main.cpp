#include "problemas.h"
#include "auxiliar.h"

int main()
{
    switch (menu_entrada()) {
    case 2:
        problema2();
        break;

    case 3:{
        char *cadena_1, *cadena_2, b1[]="Hola", b2[]="hola",b3[]="hola", b4[]="hola",b5[]="holaa", b6[]="hola";
        cadena_1=b1; cadena_2=b2;
        problema3( cadena_1, cadena_2);
        cadena_1=b3; cadena_2=b4;
        problema3( cadena_1, cadena_2);
        cadena_1=b5; cadena_2=b6;
        problema3( cadena_1, cadena_2);
        break;}

    case 4:{
        char *cadena = new char[1];
        cout << "Ingrese una cadena de numeros: "; cin >> cadena;
        problema4(cadena);
        delete[] cadena;
        break;}

    case 5:{
        int num;char cadena [10];
        char *c=cadena;
        cout << "Ingrese un numero: "; cin >> num;
        problema5( num, c);
        break;}

    case 6:{
        char *cadena = new char[0];
        cout << "Ingrese una cadena de caracteres: "; cin >> cadena;
        problema6(cadena);
        delete[] cadena;
        break;}     

    case 7:{
        char *c = new char[0];
        cout << "Ingrese una cadena de caracteres: "; cin >> c;
        problema7( c);
        delete[] c;
        break;}

    case 8:{
        char *cadena1= new char[1];
        char *cadena2= new char[1];
        cout << "Ingrese una cadena de caracteres que contenga numeros: "; cin >> cadena1;
        problema8(cadena1, cadena2);
        delete[] cadena1;
        delete[] cadena2;
        break;}

    case 9:{
        long long n;
        char *c = new char[0];
        cout << "Ingrese el numero de cifras: "; cin >> n;
        cout << "Ingrese una cadena de caracteres numericos: "; cin >> c;
        problema9( c,n);
        delete[] c;
        break;}

    case 10:{
        char *cadena = new char[1];
        cout << "Ingrese un numero en el sistema romano: "; cin >> cadena;
        problema10(cadena);
        delete[] cadena;
        break;}

    case 11:{
        char reserva, silla[3];
        silla[2]='\0';
        while (true){
            cout<<"Ingrese I para ingresar una reserva o ingrese C para cancelar una:  "; cin>>reserva;
            cout<<"Ingrese la silla: "; cin>>silla;
            problema11(reserva,silla);
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

    case 13:{
        int estrellas, imagen [6][8]={{0,3,4,0,0,0,6,8},{5,13,6,0,0,0,2,3},{2,6,2,7,3,0,10,0},{0,0,4,15,4,1,6,0},{0,0,7,12,6,9,10,4},{5,0,6,10,6,4,8,0}}; //6 posiciones, 8 elementos enteros
        estrellas=problema13(&imagen[0][0]); //se le pasa la posicion de memoria del primer elemento
        cout<< "La cantidad de estrellas en la imagen es: "<<estrellas<<endl;

        break;}


    case 14:
        problema14();
        break;

   case 15:{
        int rect1[4], rect2[4], rect3[4];
        cout << "Ingrese EN ORDEN los datos del rectangulo 1: "<<endl;
        cin >> rect1[0]>>rect1[1]>>rect1[2]>>rect1[3];
        cout << "Ingrese EN ORDEN los datos del rectangulo 2: " <<endl;
        cin >> rect2[0]>>rect2[1]>>rect2[2]>>rect2[3];
        problema15(rect1,rect2,rect3);
        break;}


    case 16:
        int caminos, cuadricula;
        cout << "Ingrese el numero de cuadricula: "; cin >> cuadricula;
        caminos=problema16(cuadricula);
        cout << "El total de caminos es " << caminos << endl;

        break;

   case 17:{
            int num;
            cout << "Ingrese un numero: "; cin >> num;
            problema17(num);
             break;}

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
