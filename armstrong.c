#include <stdio.h>
#include <math.h>
#define true 1

int main(){
    while (true)
    {
        int num;
        printf("Enter your no. to check : ");
        scanf("%d", &num);
        int sum = 0, temp0 = num, temp1 = num, count = 0;
        while (temp0 != 0)
        {
            count++;
            temp0 = temp0/10;
        }
        while (temp1 != 0)
        {
            sum += pow((temp1%10),count);
            temp1 = temp1/10;
        }
        if (sum == num)
        {
            printf("It's an armstrong number.");
        }
        else{
            printf("It's not an armstrong number.");
        }
        break;
    }
    return 0;
}
