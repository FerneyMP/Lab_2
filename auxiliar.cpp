#include "problemas.h"

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

bool numAmigable(int num)
{
    bool checkfinal = false;
    int plus=0;
    int plus_2=0;
    int numero1=1;
    int numero2 = 1;
    while(numero1<num/2){
        if(num%numero1==0){
            plus+=numero1;
        }
        numero1++;
    }
    while(numero2<=(plus/2)){
        if(plus%numero2==0){
            plus_2+=numero2;
        }
        numero2++;
    }
    if(plus==num && plus!=num){
        checkfinal=true;
    }
    return checkfinal;
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

