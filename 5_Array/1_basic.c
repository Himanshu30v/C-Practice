#include <stdio.h>

int main()
{
    int score[10];  // reserve space to store 10 integers

    score[0] = 90;
    score[1] = 98;
    score[2] = 89;
    //  We can go all the way till score[9]

    printf("The score of '0', '1' and '2' is %d, %d and %d", score[0], score[1], score[2]);
    return 0;
}