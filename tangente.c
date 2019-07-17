#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Fonction(double x){
        return pow(x,7) - pow(x,3) - 14 ;
}

double Derive(double x){
        return 7*pow(x,6) - 3*pow(x,2) ;
}

int main(int argc, char * argv[]){
        double x=atof(argv[1]),X=1;
        int i ; 
        for (i=0;i<1000; i++) {
                X=((-Fonction(x)+Derive(x)*x)/Derive(x));
                printf("X: %.30lf\n",X);
                printf("f(X): %.30lf\n",Fonction(X));
                x=X;
        }
        return 0;
}
