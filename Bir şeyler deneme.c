// Paralelkenar yapımı 16.11.2023

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int y, x, num3=-1;

    for (y = 9; y >= 0; y--)
    {
        num3++;

        for (x = 0; x <= 9+num3; x++)
        {
            if (y < 9-x)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }

        }
        printf("\n");
    }

    
    return 0;
}

