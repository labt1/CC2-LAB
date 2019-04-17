#include <iostream>
#include <stdlib.h>

using namespace std;

unsigned long long int fib_iter (int n)
{
				  int a = 0;
				  int b = 1, sum=0;


				  for (int k = 0; k < n; k++)
				  {

                        int c;
                        c = b + a;
                        a = b;
                        b = c;

                        if(b%2==0 && b<4000000){
                            cout<<b<<endl;
                            sum+=b;
                        }
                    }
	return sum ;

};


int main()
{

	cout<<fib_iter(35);

	return 0;
}
