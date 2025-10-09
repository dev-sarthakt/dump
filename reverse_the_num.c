#include <stdio.h>
#define true 1

int main(){
    int num, temp = 0;
    while(true) {
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
