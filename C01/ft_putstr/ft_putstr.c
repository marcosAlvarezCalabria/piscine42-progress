#include <unistd.h>
void ft_putstr(char *str)
{
   

    write(1, str, 1);

}

int main(void){

    char c = 'h';
    char *p = &c;

    ft_putstr(p);

   
}