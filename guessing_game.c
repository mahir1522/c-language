#include <stdlib.h>
#include <stdio.h>

int main()
{

    int number = 5;
    int guess;
    int count = 0;
    int limit = 3;
    int outofguess = 0;

    while (guess != number && outofguess == 0)
    {
        if (count < limit)
        {
            printf("Enter a number:");
            scanf("%d", &guess);
            count++;
        }
        else
        {
            outofguess = 1;
        }
    }
    if (outofguess == 1)
    {
        printf("Out of guesse");
    }
    else
    {
        printf("You win!!!");
    }

    return 0;
}