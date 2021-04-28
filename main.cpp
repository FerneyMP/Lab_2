#include "auxiliar.h"
#include "problemas.h"

int main()
{

    switch (menu_entrada()){
    case 1:
        break;

    case 2:
        problema2();
        break;

    case 3:
        break;
    case 4:{
       // char cadena[]={};
       char *cadena = new char[0];
       cout << "Ingrese una cadena de numeros: "; cin >> cadena;
       problema4(cadena);
       delete[] cadena;
    }

        break;
    case 6:{
        char *cadena = new char[0];
        cout << "Ingrese una cadena de caracteres: "; cin >> cadena;
        problema6(cadena);
        delete[] cadena;
        break;
    }

    case 8:{
        // numeros (48 -- 57)
        // minúsculas (97 -- 122)
        //char c1[] = "abc54rst";
        char *cadena1= new char[1];
        char *cadena2= new char[1];
        cout << "Ingrese una cadena de caracteres que contenga numeros: "; cin >> cadena1;
        problema8(cadena1, cadena2);
        delete[] cadena1;
        delete[] cadena2;
        break;
        }
    }
    return 0;
}


