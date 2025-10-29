#include <stdio.h>

int array_summation(int size, int array[size]){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum;
}

int main(){
    printf("Enter Size : ");
    int size;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
    printf("Sum : %d", array_summation(size, array));
    return 0;
}
