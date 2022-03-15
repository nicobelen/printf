#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris sit amet metus sed sapien mollis scelerisque et luctus odio. Maecenas placerat semper rutrum. Praesent id luctus sapien, et convallis purus. Aenean pulvinar sapien a est ultrices consectetur. Morbi efficitur elit non lorem imperdiet, quis pulvinar dolor tincidunt. Aliquam aliquam justo a efficitur efficitur. Suspendisse diam ligula, vehicula sit amet scelerisque posuere, dictum nec elit. Aliquam tempor, metus ac condimentum euismod, dui diam porta odio, ac dapibus lectus massa ac ipsum. Morbi tempus nulla libero, ut condimentum mauris pellentesque et. Aenean vestibulum ornare justo, vel luctus purus lacinia at. Donec hendrerit sollicitudin leo, id sollicitudin lorem sollicitudin eu. Praesent commodo diam at enim pellentesque, vitae semper lectus hendrerit. Ut vulputate egestas mi, eu maximus elit posuere in. In pulvinar eros sed risus convallis, at imperdiet est egestas. Mauris tortor sapien, elementum id volutpat eget, viverra in elit. In consectetur odio nulla, nec nam.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%%r]\n");
    printf("Unknown:[%%r]\n");
    return (0);
}
