#include <stdio.h>

#define WIDTH 0.01

double power(double *base, int pow){
    if (pow == 0)
    {
        return 1;
    }
    else{
        return (*base)*power(base, pow-1);
    }
}

double foxarea(double *a, double *b, double *c, double x){
    return WIDTH*(((*a)*power(&x, 2)) + ((*b)*power(&x, 1)) + ((*c)*power(&x, 0)));
}

double integrate(double a, double b, double c, double x1, double x2){
    if (x2 < x1)
    {
        return 0;
    }
    else{
        return foxarea(&a, &b, &c, (x2-(WIDTH/2)))+integrate( a,  b,  c, x1,  x2-WIDTH);
    }
}

int main(){
    printf("%lf\n", integrate(1, 0, 0, 0, 20));
    return 0;
}
