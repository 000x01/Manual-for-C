#include <stdio.h>
#include <stdbool.h>

int main()
{
    // -32 768 ~ 32 768 
    short s = 500;

    // 0 ~ 64 00
    unsigned short uns = 500;

    // -2 млн ~ 2 млн
    int i = 500;

    // 4 млн
    unsigned int uni = 500;

    // -2^63 ~ 2^63-1
    long l = 500;

    // 2^32-1
    unsigned long unl = 500;

    // много короче
    long long ll = 500;

    // Ы
    unsigned long long unll = 500;

    // тип с плавающей точкой
    float f = 4.5f;

    // еще больше чем float
    double d = 4.5;

    // еще больше
    long double ld= 4.5f;

    // символьный тип
    char sym = '1';

    // Для работы с булевыми выражениями, нужно подключить заголовочный файл stdbool.h
    bool L1 = false, L2 = true;

    int num_1 = 13;
    printf("Variable 'num_1' = %d", num_1);
    return 0;
}