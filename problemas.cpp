#include "problemas.h"
#include <cstdlib>
#include <time.h>


void problema2()
{
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

long long problema4(char *c)
{
    long long int *resultado= new long long int[10];
    long long int *acumulador;
    //Ciclo que convierte la cadena de caractere(números) en enteros
    for (int i=0;c[i]!='\0';i++){
        if(c[i]>=48 && c[i]<=57){
            resultado[i] = c[i]-'0';
            // Hasta aquí genero el arreglo con numeros enteros
        }
        else{
            break;
        }
    }
    for (int aux=0; c[aux]!='\0' ;aux++){ // Con este for recorro la cadena ya en entero y la
        cout << *(resultado+aux);
    }
    cout << endl;
   //Ahora llevo el arreglo de enteros a una variable que contenga el resultado en entero
    acumulador = resultado;
    //cout << &acumulador;
    delete[] resultado;
    return *acumulador;
}

char *problema6(char *c)
{
    char *cadena2 = new char[1];
    for (int i=0;c[i]!='\0';i++){   // For que recorre
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

void problema8(char *c1, char *c2)
{
    // c1 contiene la cadena
    // c2 cadena vacía a la que se van a llevar los números
    // c3 cadena que va contener las letras

    // numeros (48 -- 57)
    // minúsculas (97 -- 122)

    char *c3 = new char[1];
    int contador1 = 0;
    int contador2 = 0;
    for (int i=0; c1[i]!='\0'; i++){
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

long long problema10(char *c)
{
    bool F=true;
    const int M = 1000;
    const int D = 500;
    const int C = 100;
    const int L = 50;
    const int X = 10;
    const int V = 5;
    const int I = 1;
    int romanos[7]={M,D,C,L,X,V,I};
    int arabigos[30]={};
    int resultado=0;
    while(F == true){

        //int tamanio = sizeof (c)/sizeof (char);
        for (int recorre=0; c[recorre]!= '\0'; recorre++){ // ---> For para memoria dinámica
            switch (c[recorre]) {
                case 'M':
                    arabigos[recorre] = romanos[0];
                    break;
                case 'D':
                    arabigos[recorre] = romanos[1];
                    break;
                case 'C':
                    arabigos[recorre] = romanos[2];
                    break;
                case 'L':
                    arabigos[recorre] = romanos[3];
                    break;
                case 'X':
                    arabigos[recorre] = romanos[4];
                    break;
                case 'V':
                    arabigos[recorre] = romanos[5];
                    break;
                case 'I':
                    arabigos[recorre] = romanos[6];
                    break;
                default:
                    cout << "El valor ingresado no es un numero Romano..." << endl;
                    F = false;
                    break;
            }
        }
        if (F== true){
        // Rule number 1: Si un carácter esta seguido por uno de igual o menor valor, su valor se suma al total.
            for (int x=0;x<30;x++){ // --> For que recorre la cantidad del arreglo arábigos
                if (arabigos[x]>=arabigos[x+1]){ // x ---> posición determinada, (x+1) ---> siguiente posición.
                    resultado += arabigos[x];
                }
        // Rule number 2: Si un carácter esta seguido por uno de mayor valor, su valor se resta del total.
                else{
                    resultado-= arabigos[x];
                }
            }
            cout << "El numero ingresado fue: " << c << endl;
            cout << "Que corresponde a: " << resultado << endl;
            F = false;
        }
    }
    return resultado;
}

bool problema12(int **mat, int elementos)
{
    bool verdadero = false;
    int sumarFilas[elementos], sumarColumnas[elementos];
    int sF=0, sC=0, sD=0;

    // For para imprimir la matríz
    for(int filas=0; filas<elementos; filas++){
        for(int columnas=0; columnas<elementos; columnas++){
            //cout << "[" << mat[filas][columnas] << "]";
            cout << "[" << mat[filas][columnas] << "]";
        }
        cout << endl;
    }

    //Sumar las filas
    for(int filas=0; filas<elementos; filas++){
        for(int columnas=0; columnas<elementos; columnas++){
            sF+=mat[filas][columnas];
        }
        sumarFilas[filas]=sF;
        sF = 0;
    }

    //Sumar las columnas
    for(int columnas=0; columnas<elementos; columnas++){
        for(int filas=0; filas<elementos; filas++){
            sC+=mat[filas][columnas];
        }
        sumarColumnas[columnas] = sC;
        sC = 0;
    }

    //Sumar la diagonal principal
    for(int diagonal1=0, diagonal2=0; diagonal2 <elementos; diagonal1++, diagonal2++){
        sD+=mat[diagonal1][diagonal2];
    }
    //Con este For puedo realizar la comparación de las sumas, las columnas y la diagonal
    for (int i=0; i<elementos; i++){
        if( (sumarFilas[i] == sumarColumnas[i]) && (sD == sumarColumnas[i]) ){
            verdadero = true;
        }
        else{ verdadero = false;}
    }

    if (verdadero == true){
        cout << "Es un cuadrado magico ..." << endl;
    }
    else{ cout << "No es un cuadrado magico ..." << endl;}
   return verdadero;
}

void problema14()
{
    //Matriz 5x5
    const int ordenMatriz = 5;
    int Matriz[ordenMatriz][ordenMatriz];
    int Matriz90[ordenMatriz][ordenMatriz];
    int Matriz180[ordenMatriz][ordenMatriz];
    int Matriz270[ordenMatriz][ordenMatriz];
    int contador1 =1;

    //For para almacenar elementos en la matriz
    for(int filas=0; filas<ordenMatriz; filas++){
        for (int columnas=0; columnas<ordenMatriz; columnas++){
            Matriz[filas][columnas] = contador1;
            contador1++;
        }
    }

// ***************************** Matriz Original******************************************

    cout << "Matriz Original ..." << endl;
    for(int filas=0; filas<ordenMatriz; filas++){
        cout << " | ";
        for (int columnas=0; columnas<ordenMatriz; columnas++){
            if(filas<=0 || filas <=1){
                if (filas==1 && columnas==4){
                    cout << " " << Matriz[filas][columnas] << "  |";
                    //contador++;
                }
                else{
                cout << " " << Matriz[filas][columnas] << "   |";
                //contador++;
                }
            }
            else{
            cout  << " "<< Matriz[filas][columnas] << "  |";
            //contador++;
            }
        }
        cout << endl;
    }

// ***************************** Matriz Rotada 90°******************************************

    for(int filas=0; filas<ordenMatriz; filas++){
       for(int columnas=0; columnas<ordenMatriz; columnas++){
           if(filas<=0 && columnas<5){
               Matriz90[columnas][filas] = Matriz[4][columnas];
           }
           else if(filas<=1 && columnas<5){
               Matriz90[columnas][filas] = Matriz[3][columnas];
           }
           else if(filas<=2 && columnas<5){
               Matriz90[columnas][filas] = Matriz[2][columnas];
           }
           else if(filas<=3 && columnas<5){
               Matriz90[columnas][filas] = Matriz[1][columnas];
           }
           else Matriz90[columnas][filas] = Matriz[0][columnas];
       }

    }
    cout << endl;
    cout << "Matriz Rotada 90° ..."<< endl;
    for(int filas=0; filas<ordenMatriz; filas++){
        cout << " | ";
        for (int columnas=0; columnas<ordenMatriz; columnas++){
            if(filas<=0 || filas <=1){
                if (columnas==1 && filas==4){
                    cout << " " << Matriz90[filas][columnas] << " |";
                }
                else{
                cout << " " << Matriz90[filas][columnas] << "  |";
                }
            }
            else{
            cout  << " "<< Matriz90[filas][columnas] << "  |";
            }
        }
        cout << endl;
    }

// ***************************** Matriz Rotada 180°******************************************

    for(int filas=0; filas<ordenMatriz; filas++){
       for(int columnas=0; columnas<ordenMatriz; columnas++){
           if(filas<=0 && columnas<5){
               Matriz180[columnas][filas] = Matriz90[4][columnas];
           }
           else if(filas<=1 && columnas<5){
               Matriz180[columnas][filas] = Matriz90[3][columnas];
           }
           else if(filas<=2 && columnas<5){
               Matriz180[columnas][filas] = Matriz90[2][columnas];
           }
           else if(filas<=3 && columnas<5){
               Matriz180[columnas][filas] = Matriz90[1][columnas];
           }
           else Matriz180[columnas][filas] = Matriz90[0][columnas];
       }
    }
    cout << endl;
    cout << "Matriz Rotada 180° ..."<< endl;
    for(int filas=0; filas<ordenMatriz; filas++){
        cout << " | ";
        for (int columnas=0; columnas<ordenMatriz; columnas++){
            if(filas<=0 || filas <=1){
                if (columnas==2 && filas==4){
                    cout << " " << Matriz180[filas][columnas] << " |";
                }
                else{
                cout << " " << Matriz180[filas][columnas] << "  |";
                }
            }
            else{
            cout  << " "<< Matriz180[filas][columnas] << "  |";
            }
        }
        cout << endl;
    }
// ***************************** Matriz Rotada 270°******************************************
    for(int filas=0; filas<ordenMatriz; filas++){
       for(int columnas=0; columnas<ordenMatriz; columnas++){
           if(filas<=0 && columnas<5){
               Matriz270[columnas][filas] = Matriz180[4][columnas];
           }
           else if(filas<=1 && columnas<5){
               Matriz270[columnas][filas] = Matriz180[3][columnas];
           }
           else if(filas<=2 && columnas<5){
               Matriz270[columnas][filas] = Matriz180[2][columnas];
           }
           else if(filas<=3 && columnas<5){
               Matriz270[columnas][filas] = Matriz180[1][columnas];
           }
           else Matriz270[columnas][filas] = Matriz180[0][columnas];
       }
    }
    cout << endl;
    cout << "Matriz Rotada 270° ..."<< endl;
    for(int filas=0; filas<ordenMatriz; filas++){
        cout << " | ";
        for (int columnas=0; columnas<ordenMatriz; columnas++){
            if(filas<=0 || filas <=1){
                if (columnas==1 && filas==4){
                    cout << " " << Matriz270[filas][columnas] << " |";
                }
                else{
                cout << " " << Matriz270[filas][columnas] << "  |";
                }
            }
            else{
            cout  << " "<< Matriz270[filas][columnas] << "  |";
            }
        }
        cout << endl;
    }
}

int problema16(int n)
{
    int caminos;
    caminos= recursiva(0,0,n+1,0);
    return caminos;
}

void problema18(char *p, int n)
{
    char *m;
    if(n>=1 && n<=factorial(10)){
        m = permutaciones(n-1,10);
        for(int i=0; m[i]!='\0';i++) p[i]=m[i];
        p[10]='\0';
    }
    else cout << "EL numero de permutacion no es valido" << endl;
}
