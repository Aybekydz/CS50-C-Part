#include <stdio.h>

int main()
{
    int coins = 0;
    int cents = -1;
    
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;

    while (cents < 0)
    {
        printf("Change owed: ");
        scanf("%d", &cents);
    }
    
    coins += cents / quarters; //number of quarters
    cents %= quarters; //update the remaining amount

    coins += cents / dimes;
    cents %= dimes;

    coins += cents / nickels;
    cents %= nickels;

    coins += cents / pennies;
    cents %= pennies; 

    printf("Coin: ");
    printf("%d", coins);
}