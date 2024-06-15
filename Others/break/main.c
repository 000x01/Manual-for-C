#include <stdio.h>

/* понятие - break */

int main()
{   
    for(int i = 0; i <= 10; i++)
    {
        printf("Result i = %d\n", i);
        if(i==7)
        {
            break; /* выход из системы */
        }
    }
    return 0;
}