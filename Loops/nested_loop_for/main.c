#include <stdio.h>

/* понятие вложенного цикла */

int main()
{
    for(int i = 0; i <= 3; i++)
    {
        printf("Result i = %d\n", i);

        for (int x = 0; x <= 5; x++)
        {
            printf("x = %d\n", x);
        }
        
    }
    return 0;
}