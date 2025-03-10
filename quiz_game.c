#include <stdio.h>
int main()
{
    unsigned char answer;
    int score, input;
    do
    {
        score = 0;
        printf("Q1. capital of india\n (a)bihar\n (b)delhi\n (c)haryana\n (d)punjab\n");
        printf("enter your answer:");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B')
        {
            printf("correct\n");
            score++;
        }
        else
        {
            printf("incorrect\n");
        }

        printf("Q2. which planet is known as the red planet\n (a)jupiter\n (b)mars\n (c)saturn\n (d)venus\n");
        printf("enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'B')
        {
            printf("correct\n");
            score++;
        }
        else
        {
            printf("incorrect\n");
        }
        printf("Q3. who considered the father of the nation in INDIA\n (a)jawaharlal\n (b)mahatma gandhi\n (c)sardar vallabhbhai patel\n (d)B.R ambedekar\n");
        printf("enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D')
        {
            printf("correct\n");
            score++;
        }
        else
        {
            printf("incorrect\n");
        }
        printf("Q4.when india win t20 world cup\n (a)2022\n (b)2023\n (c)2024\n (d)2025\n");
        printf("enter ypur answer: ");
        scanf(" %c", &answer);
        if (answer == 'c')
        {
            printf("correct\n");
            score++;
        }
        else
        {
            printf("incorrect\n");
        }
        printf("Q5.capital of bihar\n (a)patna\n (b)buxar\n (c)gaya\n (d)darbhanga\n");
        printf("enter your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A')
        {
            printf("correct\n");
            score++;
        }
        else
        {
            printf("incorrect\n");
        }
        printf("your final score is %d/5\n", score);
        if (score == 5)
        {
            printf("excelant\n");
        }
        else if (score <= 3)
        {
            printf("Good\n");
        }

        printf("Do you want to continue\n1 - Yes\n2 - No\n: ");
        scanf("%d", &input);
    } while (input == 1);
    printf("Thank you..........");
    return 0;
}