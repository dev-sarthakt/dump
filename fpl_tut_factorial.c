#include <stdio.h>

double fac_rec(int i){
    if (i == 0 || i ==1){
        return 1;
    }
    else{
        return i*fac_rec(i-1);
    }
}

double fac_itt(int *i){
    double fac = 1;
    for(; *i > 0 ; (*i)--){
        fac *= (*i);
    }
    return fac;
}

int main(){
    int num;
    printf("Enter no to test factorial with recursive function : ");
    scanf("%d", &num);
    printf("%0.3lf\n", fac_rec(num));
    printf("Enter no to test factorial with iterative function : ");
    scanf("%d", &num);
    printf("%0.3lf", fac_itt(&num));
    return 0;
}
