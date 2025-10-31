#include <stdio.h>

#define SIZE 10

#define TRUE 1

struct product{
    char *name;
    int exp;
    double qty, price, total;
};

void calc_total(int i, int size, struct product *array[size]){
    array[i]->total = array[i]->price*array[i]->qty;
}

int main(){
    int i = 0;
    char add;
    struct product p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, *products[SIZE] = {&p0, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9}; 
    while (TRUE)
    {
        printf("Add new product in database? [Y/N] : ");
        scanf("%c", &add);
        if (add == 'Y' || add == 'y')
        {
            if (i > 9)
            {
                return 1;
            }
            printf("Enter product name : ");
            scanf("%s", &(products[i]->name));
            printf("Enter QTY in (kg) : ");
            scanf("%lf", &(products[i]->qty));
            printf("Enter price per kg : ");
            scanf("%lf", &(products[i]->price));
            calc_total(i, SIZE, products);
            printf("Enter expiry in days : ");
            scanf("%s", &(products[i]->exp));
            i++;
        }
        else{
            for (int g = 0; g < i; i++)
            {
                printf("%d. %s %lf %d")
            }
            
        }
    }
    
    return 0;
}
