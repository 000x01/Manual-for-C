#include <stdio.h>

/* понятие - goto */

int main()
{
    printf("Result - 1\n"); /* tracked */
    printf("Result - 2\n"); /* tracked */
    goto link;
    printf("Result - 3\n"); /* untracked */
    printf("Result - 4\n"); /* untracked */
    link:
    printf("Result - 5\n"); /* tracked */
    return 0;
}