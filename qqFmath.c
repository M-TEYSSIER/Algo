#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char * argv[]){
        
        double a=atof(argv[1]),b;

        printf("a: %f\n",a); 
        b=cos(a);
        printf("cos: %f \n",b);
        b=tan(a);
        printf("tan: %f \n",b);
        b=sin(a);
        printf("sin: %f \n",b);
        b=acos(a);
        printf("acos: %f \n",b); // Arc_cos | Cos^-1
        b=atan(a);
        printf("atan: %f \n",b); 
        b=asin(a);
        printf("asin: %f \n",b);
        b=atan2(a,a);
        printf("atan2: %f \n",b);
        b=sinh(a);
        printf("sinh: %f \n",b); // Sin hyperbolic
        b=cosh(a);
        printf("cosh: %f \n",b);
        b=tanh(a);
        printf("tanh: %f \n",b);
        b=exp(a);
        printf("exp: %f \n",b);
        b=log(a);
        printf("log: %f \n",b);
        b=log10(a);
        printf("log10: %f \n",b);
        b=ldexp(a,exp(a));
        printf("ldexp: %f \n",b);


        return 0;
}
