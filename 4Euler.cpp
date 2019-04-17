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
    int res=0,mayor=0;

    for(int i=100;i<999;i++){
        for(int j=100;j<999;j++){
                res=i*j;
                cout<<i<<"x"<<j<<" = "<<res<<endl;
                mayor=res;
            if(palindromo(res))
                if(res>mayor)
                    mayor=res;
        }
    }
return res;
}
 int main(){
 cout<<mayorpalin();
 return 0;

 }
