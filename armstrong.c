#include <stdio.h>
#include <math.h>
#define true 1

int main(){
    int num = 0;
    while (true)
    {
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
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}
