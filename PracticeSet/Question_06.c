// Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

#include <stdio.h>
     int main(){
        int x=2, y=3,z=3,k=1;
        int equation= 3*x/y-z+k;
        // according to operator precendence and associavity
        //3*x will be executed -- 3*x = 2
        // then 2 will be divided by y -- 2/y =0
        // then -z+k will be operated -- -3+1= -2

        printf("value of equation = %d", equation);

        return 0;
        

     }