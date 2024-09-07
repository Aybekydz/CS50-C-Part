#include <stdio.h>

int main()
{
    int height = -1;
    // User will determine the height of the pyramide
    while (height < 1)
    {
        printf("Height: ");
        scanf("%d", &height);    
    }
    
    // Print a pyramid of that height
    for (int i = 0; i < height; i++)
    {
        for (int space = height-i+1; space > 0; space--)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}