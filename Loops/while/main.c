#include <stdio.h>

/*
    понятие цикла - while
*/
int main()
{
    /*
    while(утверждение)
    {
        действие для повторения
    }
    */
    int x = 0;
    while(++x <= 10)
    {
        printf("Result x = %d\n", x);
    }
    return 0;
}