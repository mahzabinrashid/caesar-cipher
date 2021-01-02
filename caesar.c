#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])

{
    int k;

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int j = 0, m = strlen(argv[1]); j < m; j++)
    {

        if (isdigit(argv[1][j]))
        {
            k = atoi(argv[1]);
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    if (isdigit(*argv[1]))
    {

        string s = get_string("Plaintext: ");

        printf("ciphertext: ");

        for (int i = 0, n = strlen(s); i < n; i++)
        {
            if isupper(s[i])
            {
                printf("%c", (((s[i] + k) - 65) % 26) + 65);
            }

            else if islower(s[i])
            {
                printf("%c", (((s[i] + k) - 97) % 26) + 97);
            }

            else
            {
                printf("%c", s[i]);
            }
        }

    }

    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("\n");
}
