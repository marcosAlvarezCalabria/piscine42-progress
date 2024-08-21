#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_print_combn(int n)
{
    int i = 0;
    while(i <= n){
        ft_putchar(i + '0');
        i ++;
    }
}

void main(void){
    int n = 5;
    ft_print_combn(n);
}