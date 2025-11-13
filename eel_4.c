#include <stdio.h>

#define SIZE 10

#define TRUE 1

struct product{
    char name[20];
    int exp;
    double qty, price, total;
};

void calc_total(int i, int size, struct product *array[SIZE]){
    array[i]->total = array[i]->price*array[i]->qty;
}

void bubble(int entry, struct product *products[]){
    for (int i = 0; i < entry; i++)
    {
        for (int j = i+1; j < entry; j++)
        {
            if (products[i]->exp > products[j]->exp)
            {
                struct product temp;
                temp = *products[i];
                *products[i] = *products[j];
                *products[j] = temp;
            }
            else if (products[i]->exp == products[j]->exp)
            {
                if (products[i]->total < products[j]->total)
                {
                    struct product temp;
                    temp = *products[i];
                    *products[i] = *products[j];
                    *products[j] = temp;
                }
                
            }
            
        }
        
    }
    
}

int main(){
    int i = 0, sort = 0, ch;
    char add;
    struct product p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, *products[SIZE] = {&p0, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &p9}; 
    while (TRUE)
    {
        
        printf("\nAdd new product in database? [Y/N] : ");
        scanf("%c", &add);
        if (add == 'Y' || add == 'y')
        {
            if (i >= SIZE)
            {
                return 1;
            }
            printf("\nEnter product name : ");
            scanf("%s", products[i]->name);
            printf("Enter QTY in (kg) : ");
            scanf("%lf", &(products[i]->qty));
            printf("Enter price per kg : ");
            scanf("%lf", &(products[i]->price));
            calc_total(i, SIZE, products);
            printf("Enter expiry in days : ");
            scanf("%d", &(products[i]->exp));
            while ((ch = getchar()) != '\n' && ch != EOF);
            sort = 1, i++;
        }
        else if (add == 'N' || add == 'n'){
            while ((ch = getchar()) != '\n' && ch != EOF);
            if (sort == 1)
            {
                bubble(i, products);
                for (int g = 0; g < i; g++)
                {
                    printf("\n| %d | %s | Investment : %lf | Exp : %d |\n", g+1, products[g]->name, products[g]->total, products[g]->exp);
                }
                sort = 0;
            }
            else{
                for (int g = 0; g < i; g++)
                {
                    printf("\n| %d | %s | Investment : %lf | Exp : %d |\n", g+1, products[g]->name, products[g]->total, products[g]->exp);
                }
            }
        }
    }
    
    return 0;
}
