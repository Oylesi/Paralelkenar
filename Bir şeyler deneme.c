// Bir şeyler deneme.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    for (num1 = 10; num1 >= 0; num1--)
    {
        for (num2 = 0; num2 <= 10+num1; num2++)
        {
            if (num2 >= num1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

    
    return 0;
}

