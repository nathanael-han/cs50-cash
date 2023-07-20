//Nathanael Han
//Calculates the minimum number of coins to return change.
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollars;

    // Prompt user to provide the change owed
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    int cents = round(dollars * 100);
    int coins = 0;

    // Calculates the minimum number of coins possible to return change.
    while (cents >= 25)
    {
        cents = cents - 25;
        coins++;
    }

    while (cents >= 10)
    {
        cents = cents - 10;
        coins++;
    }

    while (cents >= 5)
    {
        cents = cents - 5;
        coins++;
    }

    while (cents >= 1)
    {
        cents = cents - 1;
        coins++;
    }




    printf("%i\n", coins);
}



