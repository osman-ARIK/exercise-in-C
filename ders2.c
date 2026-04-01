#include <stdio.h>

const double pi=3.14;

double alan(double a){
    double alan = pi*a*a;
    return alan;
}
//pi*a^2
int main(){
double a,c;
printf("cemberin yaricapini giriniz:");
scanf("%lf", &a);
c= alan(a);
printf("cemberin alani: %lf",c);

   return 0;
}

