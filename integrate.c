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
    double para[5];
    printf("\nEnter the coefficient of x^2 : ");
    scanf("%lf", &para[0]);
    printf("Enter the coefficient of x : ");
    scanf("%lf", &para[1]);
    printf("Enter the constant : ");
    scanf("%lf", &para[2]);
    printf("Enter the lower limit : ");
    scanf("%lf", &para[3]);
    printf("Enter the upper limit : ");
    scanf("%lf", &para[4]);
    printf("\nThe area under graph is : %lf\n", integrate(para[0], para[1], para[2], para[3], para[4]));
    return 0;
}
