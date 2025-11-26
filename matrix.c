#include <stdio.h>

void print(int array[3][3]){
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(){
    int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, mat2[3][3] = {{9,8,7},{6,5,4},{3,2,1}}, mat3[3][3], mat4[3][3], mat5[3][3];

    //addition
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }
    
    //subtraction
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat4[i][j] = mat1[i][j] - mat2[i][j];
        }
        
    }

    //multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat5[i][j] = mat1[i][0]*mat2[0][j] + mat1[i][1]*mat2[1][j] + mat1[i][2]*mat2[2][j];
        }
    }
    printf("Mat A : ");
    print(mat1);
    printf("Mat B : ");
    print(mat2);
    printf("Mat A+B : ");
    print(mat3);    
    printf("Mat A-B : ");
    print(mat4);
    printf("Mat A*B : ");
    print(mat5);
    return 0;
}
