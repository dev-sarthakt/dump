#include <stdio.h>
#define TRUE 1

int main(){
    int num, temp;
    while(TRUE) {
        temp = 0;
        printf("\nNum : ");
        scanf("%d", &num);
        while(num != 0){
            temp = (temp*10)+(num%10);
            num = num/10;
        }
        printf("Rev Num : %d\n", temp);
    }
    return 0;
}
