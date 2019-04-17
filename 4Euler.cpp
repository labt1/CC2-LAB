#include<iostream>
using namespace std;



bool palindromo(int n){
    int aux,resto,numInv=0;
    aux=n;
    while(aux>0){
      resto=aux%10;
      aux=aux/10;
      numInv=numInv*10+resto;
    }
    if(numInv==n){
        return true;
    }
    else
       return false;
}

int mayorpalin(){
    int mayor=0;
    for(int i=100;i<102;i++){
        for(int j=100;j<102;j++){
           mayor=i*j;
           cout<<i<<"x"<<j<<"="<<mayor<<endl;
        }
    }
return 0;
}


