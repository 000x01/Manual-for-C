#include <stdio.h>

/* понятие кэйсов - switch */

int main()
{
    int x;
    printf("Enter a value for x = "); scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Result x = %d\n", x);
        printf("tracked");
        break;
    case 2:
        printf("Result x = %d\n", x);
        printf("tracked");
        break;
    case 3:
        printf("Result x = %d\n", x);
        printf("tracked");
        break;
    
    default:
        printf("Result x = %d\n", x);
        printf("untracked");
        break;
    }
}