#include <stdio.h>

int main()
{   
    // if else
    int fx = 1, x = 1, y = 1;
    if(fx == 1 || x >= 1 && y <= 2)
    {
        printf("Yes\n");
        if(y == 1)
            printf("YES\n");
    }
    else if(y == 3)
    {
        printf("No\n");
    }
    else
    {
        printf("back\n");
    }
    // Кэйсы 
    int fax;
    printf("Enter a value for fax = "); scanf("%d", &fax);
    switch (fax)
    {
    case 1:
        printf("fax = %d\n", fax);
        break;
    
    default:
        printf("exit\n");
        break;
    }
    return 0;
}