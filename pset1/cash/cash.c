#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float n = 0;
    do
    {
        int count = 0;
        n = get_float("Change owed: ");
        if (n > 0)
        {
            int cents = round(n * 100);

            for (int i = 0; cents > 0 ; i ++)
            {

                if (cents >= 25)
                {
                    cents = cents - 25;
                    count++;
                }
                else if (cents >= 10)
                {
                    cents = cents - 10;
                    count++;
                }
                else if (cents >= 5)
                {
                    cents = cents - 5;
                    count++;
                }
                else
                {
                    cents = cents - 1;
                    count++;
                }
            }
            printf("count: %d", count);
        }
    }
    while (n < 0);
}