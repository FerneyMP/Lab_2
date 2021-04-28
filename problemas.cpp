#include "auxiliar.h"
#include "problemas.h"
#include <cstdlib>
#include <time.h>



void problema2(){
    //ASCCI - Mayúsculas (65 , 90)
    // VARIABLES PRINCIPALES
    int  aleatorio, Cont_igual=0;
    char AZ[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char arreglo[200]={};
    char mayuscula = 'A', acumulador;

    // INVOCACIÓN DE FUNCION SRAND
    srand(time(NULL));

    // EJECUCION DEL PROGRAMA
    for(int j=0;j<200;j++){ // j es el contador que itera en cada posicion y la aumenta
        aleatorio = rand()%26; // Genera numero aleatorio entre 0 a 25 dado que las mayusculas estan entre 65 a 90
        acumulador = aleatorio + mayuscula; // Suma el numero aleatorio con el valor numérico de la mayúscula
        arreglo[j] = acumulador; // En la posición j del arreglo, ubica el valor aleatorio generado con anterioridad
        cout << arreglo[j];
    }
    cout << endl;
    //
    for(int x=0;x<26;x++){  // FOR que recorre el arreglo de las mayúsculas 'A' -- 'Z'
        cout<<AZ[x]<<": "; //En este
        Cont_igual=0; // Necesaria para reiniciar el contador iguales
        for(int z=0;z<200;z++){ // FOR que recorre el arreglo de los 200 numeros aleatorios
            if(AZ[x]==arreglo[z]){// CONDICIÓN que evalúa si hay mayúsculas iguales
                Cont_igual++; // contador que aumenta cada vez que encuentra un valor igual
            }
        }
        cout<<Cont_igual<<endl;
    }
 }

long long int problema4(char *c){
    long long int *resultado= new long long int[10];
    long long int *acumulador;
    for (int i=0;;i++){ // i < c.length;
        if(c[i]>=48 && c[i]<=57){
            resultado[i] = c[i]-'0';
            // Hasta aquí genero el arreglo con numeros enteros
        }
        else{
            break;
        }

    }    
    for (int aux=0; aux<10 ;aux++){
        cout << *(resultado+aux);
    }
   //Ahora llevo el arreglo de enteros a una variable que contenga el resultado en entero


    acumulador = resultado;
    delete[] resultado;
    return *acumulador;
}


char * problema6(char *c){

    char *cadena2 = new char[1];
    for (int i=0;i<30;i++){         // For que recorre
        if(c[i]>=97 && c[i]<=122){
            cadena2[i]=c[i]-32;
        }
        else if(c[i] <= 65 || c[i] <= 90){
            cadena2[i]=*(c+i);
        }
        else{
            cadena2[i]=c[i];
        }
    }
    cout << "Original: " << c << endl;
    cout << "En mayuscula: " << cadena2 << endl;
    delete[] cadena2;
    return cadena2;
}

void problema8(char *c1, char *c2){
    // c1 contiene la cadena
    // c2 cadena vacía a la que se van a llevar los números
    // c3 cadena que va contener las letras
    char *c3 = new char[1];
    int contador1 = 0;
    int contador2 = 0;
    for (int i=0; i<30; i++){
        if(c1[i]>=48 && c1[i]<=57){
          c2[contador1]= c1[i];
          contador1++;
        }
        else{
            c3[contador2]= c1[i];
            contador2++;
        }
    }
    cout << "Original: " << c1 << endl;
    cout << "Texto: " << c3 << endl;
    cout << "Numero: " << c2 << endl;
    delete[] c3;
}





