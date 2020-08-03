//Creado por Juan Sebastian Gomez Vera
//Se le pedirá al usuario que ingrese un numero y lo descomoneremos en sus factores primos.

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;

int main (){

    int num ;// declaramos la variable.
    cout<<"Ingrese un numero entero"<<endl; //mensaje indicando que ingrese el numero.
    cin>>num; // variable de entrada.
    printf ("%d = ", num);
    for(int i = 2; num > 1; i++){ //mientras que el numero ingresado sea mayor a 1, i aumenta en 1
        while (num % i == 0){ //se dividirá el numero en el factor i
            printf("%d *", i) ;// se imprime el numero seguido a un *
            num /= i;
            
            
        }
        
    }
}