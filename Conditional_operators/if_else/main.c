#include <stdio.h>

/* понятие оператор условия - if else */

int main()
{
    int a1 = 0, a2 = 1, a3 = 3; 

    if (a1 == 0 && a2 == 2 || a3 == 3)
    {
        printf("Result a1 = %d\n", a1);
        printf("Result a2 = %d\n", a2);
        printf("Result a3 = %d\n", a3);
        
        if(a2 == 1)
        {
            printf("a2 tracked");
        }
    }
    else if(a1 < 1)
    {
        printf("next time");
    }
    else
    {
        printf("end");
    }
    
    return 0;    
}