#include <stdio.h>

/* понятие - continue */

int main()
{
    for(int i = 0; i <= 10; i++)
    {
        if (i==5)
        {
            continue; /* untracked i = 5*/
        }
        printf("Result i = %d\n", i);
    }
    return 0;
}