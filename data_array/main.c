#include <stdio.h>

int main()
{
    // Массив
    int arr [3] = {1, 3, 5};
    arr[0] = 3;
    printf("%d\n", arr[2]);
    // Двухмерный массив
    int array [3][4] = {
        {0, 14, 24, 36},
        {12, 26, 30, 40},
        {22, 28, 36, 44}
        /*
        {[0][0],[0][1],[0][2],[0][3]}
        {[1][0],[1][1],[1][2],[1][3]}
        {[2][0],[2][1],[2][2],[2][3]}
        */
    };
    printf("%d\n", array[2][2]);
    // Символьный массив 
    char word[] = {'s', 'c', 'h', '2'};
    // Пробел не считается
    char words[] = {"Hellow world___!"};
    words[13] = '2'; words[14] = '1';
    printf("%s\n", words);
    printf("%c\n", words[13]);
    return 0;
}