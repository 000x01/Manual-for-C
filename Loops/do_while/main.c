#include <stdio.h>

/* понятие цикла - do while */

int main()
{
    /* Данный цикл в любом случае сработает один раз */
    int x = 0; 
    do
    {
        printf("Result x = %d\n", x);
    } while (++x <= 10);
    
    return 0;
}