#include <stdio.h>

int main(){
    char string[] = "The sun dipped below the horizon, casting a warm, golden glow over the quiet town. Birds chirped in the distance, and the soft rustling of the trees filled the air with a sense of calm. As the night approached, the first stars began to twinkle in the sky, promising a peaceful end to the day.";
    char *c = string;
    int frequency[256] = {0};
    while (*c!='\0')
    {
        frequency[*c]++;
        c++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] > 0)
        {
            printf("%c : %d\n", i, frequency[i]);
        }
    }
    return 0;
}
