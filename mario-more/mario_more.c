#include <stdio.h>

int main()
{
    int height;

    while (height < 1 || height > 8)
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    
    /*  
        We use the same code as mario-less except the fact that,
        we are printing spaces on the left and on the right side 
        to align the pyramid.
    */
    for (int i = 0; i < height; i++)
    {
        for (int space = height-i+1; space > 0; space--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int j_prime = 0; j_prime < i; j_prime++)
        {
            printf("#");
        }
        printf("\n");
    }

return 0;
}