#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[])
{

    if (argc == 2)
    {
        //check if argc is 2, and argv[1] is a digit.
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!isdigit(argv[1][i]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        int key = atoi(argv[1]); //convert string to integer
        string input = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0; i < strlen(input); i++)
        {
            if (isalpha(input[i]))
            {
                if (isupper(input[i]))
                {
                    //check if it's upper
                    printf("%c", (((input[i] - 'A') + key) % 26) + 'A'); //convert it to ciphertext then to ASCII
                }
                else if (islower(input[i]))
                {
                    //check if it's lower
                    printf("%c", (((input[i] - 'a') + key) % 26) + 'a');
                }
            }
            else
            {
                printf("%c", input[i]);
            }

        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}