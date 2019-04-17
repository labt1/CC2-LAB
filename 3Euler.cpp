#include <iostream>
#include <stdlib.h>


using namespace std;

int mayorfactoprimo( long long n){
    int mayor=0;
    for (int i=2;n>1;i++){
        while(n%i==0){
            cout<<i<<"x";
            mayor=i;
            if(mayor<i)
                mayor=i;
        n/=i;
        }
    }
return mayor;
}
int main(){
cout<<mayorfactoprimo(600851475143);
return 0;
}
