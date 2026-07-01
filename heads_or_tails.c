#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char name[100];
    int heads = 0;
    int tails = 0;
    int toss;

    srand(time(NULL));

    printf("Who are you?\n");
    printf("> ");
    scanf("%99s", name);

    printf("Hello, %s!\n", name);

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
    if (heads > tails){
        printf("You won!\n");
    }else{
        printf("You lost!\n");
    }

    return 0;
}