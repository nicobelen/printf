#include "main.h"

/**
 *
 *
 *
 */

void printf_number(int n)
{
        unsigned int a;

        if (n < 0)
        {
                n = -n;
                _putchar('-');
        }
        else if (n == 0)
        {
                _putchar('0');
        }
        while (n > 0)
        {
                n = ((n % 8) + '0');
                n /= 8;
                a = n;
                a = ((n % 8) + '0');
                a /= 8;
                _putchar(a);
        }
}
