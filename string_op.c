#include <stdio.h>

int strcompare(char *a, char *b){
    while (*a || *b != '\0')
    {
        if (*a > *b)
        {
            return 1;
        }
        else if (*a < *b){
            return -1;
        }
        a++, b++;
    }
    return 0;

}

int count (const char *s){
if(*s == '\0'){
return 0;
}
else {
return 1 + count(s+1);
}
}

void concatenate(char str1[], char str2[]) {
int i = 0, j = 0;
while (str1[i] != '\0') {
i++;
}
while (str2[j] != '\0') {
str1[i] = str2[j];
i++;
j++;
}
str1[i] = ' ';
}

int main() {
    char name[2][25];
    printf("Enter 1st str : ");
    scanf("%s", name[0]);
    printf("Enter 2nd str : ");
    scanf("%s", name[1]);
    if (strcompare(&name[0][0], &name[1][0]) == 1)
    {
        printf("\nString 2 comes first in lexiographic order.\n");
    }
    else if (strcompare(&name[0][0], &name[1][0]) == -1)
    {
        printf("String 1 comes first in lexiographic order.\n");
    }
    else{
        printf("Both Strings are same.\n");
    }
    

int length = count(&name[0][0]);
int length1 = count(&name[1][0]);
printf("\nThe length of string 1: %d\n", length);
printf("\nThe length of string 2: %d\n", length1);


concatenate(name[0], name[1]);

printf("Concatenated String: %s\n", name[0]);
return 0;
    
    
}
