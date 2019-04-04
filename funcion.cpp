#include <iostream>
#include <cmath>
#include <stdlib.h>


using std::cout;
using std::endl;


void MCMCL(int N);
float f(float x);
    
    
    
int main(){
    
    int N= 10000; 

    srand48(40);
    MCMCL(N);



    return 0;

}
    

void MCMCL(int N){
    //int minimo=0; 
    l= drand48(40);
    for(int i=0;i<N; i++){
        propuesta= l + (drand48()-0.5)*2
        r = std::min(1, f(propuesta)/f(l))
       	alpha = drand(48);
        	if(alpha<r){cout << propuesta << endl; }
        	else{cout << l << endl;}
    
    }



}
 

float f(float x){

    return exp(-x*x/2)

}