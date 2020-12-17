#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    do
    {
        height = get_int("Height: ");
        if (height > 0 && height < 9) // 처음 실행할 때 조건 체크
        {
            for (int i = 0 ; i < height ; i++) // y
            {
                for (int j = 0 ; j < height - i - 1 ; j++) // x
                {
                    printf(" ");
                }
                for (int k = height - i ; k < height ; k++)
                {
                    printf("#");
                }
                printf("#");
                printf("\n");
            }
        }
    }
    while (height > 8 || height < 1);
}