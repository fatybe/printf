#include "ft_printf.h"
int main()
{
    int a = 10;
    char c = 'a';
    char *str = "hello";
    unsigned int b = 10;

    ft_printf("%i\n", a);
    ft_printf("%c\n",c);
    ft_printf("%s\n",str);
    ft_printf("%u\n",b);
    ft_printf("%p\n",&a);
    ft_printf("%x\n", 1234);
    ft_printf("%X\n", 1234);

}