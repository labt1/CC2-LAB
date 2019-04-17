#include <iostream>
using namespace std;

int mcm(int num1 , int num2){
    int m=min(num1,num2),mcd=0;
    for (int i = 1;i<=m;i++){
        if (num1%i==0 & num2%i==0){
            mcd=i;
        }
    }
    return ((num1*num2)/mcd);
}

int main(){
    int num=1;
    for(int i=1;i<20;i++){
        num=mcm(num,i);
    }
  cout <<num<<endl;
    return 0;
}
