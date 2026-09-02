#include <stdio.h>

int main()
{
    int makrs[5];

    printf("Enter makrs of Hindi: ");
    scanf("%d", &makrs[0]);

    printf("Enter makrs of English: ");
    scanf("%d", &makrs[1]);

    printf("Enter makrs of Maths: ");
    scanf("%d", &makrs[2]);

    printf("Enter makrs of Physics: ");
    scanf("%d", &makrs[3]);

    printf("Enter makrs of Chemistry: ");
    scanf("%d", &makrs[4]);

    int sum = makrs[0] + makrs[1] + makrs[2] + makrs[3] + makrs[4];
    float percentage = sum / 5.0;

    printf("Total makrs obtained by the student out of 500 is: %d\n", sum);
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