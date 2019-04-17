#include <iostream>

using namespace std;

int resta(int a){
    int sum2=0,sum1=0;
    for(int i = 1 ; i<=a;i++){
        sum2 +=(i*i);
    }
    for(int i=1;i<=a;i++){
        sum1 +=i;
    }
    return (sum1*sum1)-sum2;
}
int main(){
    cout << resta(100);
    return 0;
}
