#include <iostream>
#include <cmath>
#include <stdlib.h>


using std::cout;
using std::endl;


void MCMCL(int N);
float f(float x);
    
    
    
int main(){
    
    int sigma= 1;
    float p;
    int N= 10000; 
    float x; 

    srand48(40);
    MCMCL(N,p);
    cout << p << endl; 
    
 



    return 0;

}
    

void MCMCL(int N, float p){
    //int minimo=0; 
    int sigma= 1; 
    l= drand48(40);
    for(int i=0;i<N; i++){
        propuesta= l + (drand48(40)-0.5)*(2*sigma)
        r = std::min(1, f(propuesta)/f(l))
       	alpha = drand(48);
        	if(alpha<r){p = propuesta; }
        	else{ p = l;}
    
    }



}
 

float f(float x){

    return exp(-x*x/2)

}
