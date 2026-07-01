#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int heads = 0;
    int tails = 0;
    int toss;

    srand(time(NULL));

    printf("Tossing a coin...\n");

    for (int i = 1; i <= 3; i++)
    {
        toss = rand() % 2;

        if (toss == 0)
        {
            printf("Round %d: Heads\n", i);
            heads++;
        }
        else
        {
            printf("Round %d: Tails\n", i);
            tails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", heads, tails);

    return 0;
}