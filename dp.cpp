#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <math.h>


using namespace std;

int main (){

    int num ;
    cout<<"Ingrese un numero entero"<<endl;
    cin>>num; 
    printf ("%d = ", num);
    for(int i = 2; num > 1; i++){
        while (num % i == 0){
            printf("%d *", i) ;
            num /= i;
            
            
        }
        
    }
}