#include <stdio.h>

int main()
{
    int height;
    printf("Height: ");
    scanf("%d", &height);

    while (height < 1 || height > 8);  

    for (int i = 0; i < height; i++) 
    {
        for (int space = height - i - 1; space > 0; space--) 
        {
            printf(" ");
        }
        for (int hash = 0; hash < i + 1; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}
