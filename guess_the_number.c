#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1, highest_num;
    srand(time(0));
    printf("the highest number you want to guess\n");
    scanf("%d", &highest_num);
    number = rand() % highest_num + 1;
    do
    {
        printf("Guess the number between 1 to %d\n", highest_num);
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses += 1;
    } while (guess != number);

    return 0;
}