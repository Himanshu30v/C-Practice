#include <stdio.h>

int main()
{
    int score[5];

    printf("Enter score of Hindi: ");
    scanf("%d", &score[0]);

    printf("Enter score of English: ");
    scanf("%d", &score[1]);

    printf("Enter score of Maths: ");
    scanf("%d", &score[2]);

    printf("Enter score of Physics: ");
    scanf("%d", &score[3]);

    printf("Enter score of Chemistry: ");
    scanf("%d", &score[4]);

    int sum = score[0] + score[1] + score[2] + score[3] + score[4];
    float percentage = sum / 5;

    printf("Total score obtained by the student out of 500 is: %d\n", sum);
    printf("Percentage is: %.2f\n", percentage);

    if (percentage > 90)
    {
        printf("Pass with Grade 'A+'\n");
    }
    else if (percentage <= 90 && percentage >= 80)
    {
        printf("Pass with Grade 'A'\n");
    }
    else if (percentage < 80 && percentage >= 70)
    {
        printf("Pass with Grade 'B");
    }
    else if (percentage < 70 && percentage >= 60)
    {
        printf("Pass with Grade 'C'\n");
    }

    else if (percentage < 60 && percentage >= 50)
    {
        printf("Pass with Grade 'D'\n");
    }
    else if (percentage < 50 && percentage >= 44)
    {
        printf("Pass with Grade 'E'\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}