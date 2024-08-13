/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   <filename>                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: <marcosal>                                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: <date> by <marcosal>                     #+#    #+#             */
/*   Updated: <date> by <username>                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    char i;
    char j;
    char k;

    i = '0';
    while(i <= '7')
    {
        j = i + 1;
        while(j <= '8')
        {
            k = j + 1;
            while(k <= '9')
            {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k);
                if (i != '7' || j != '8' || k != '9') // Para evitar la coma y espacio después de "789"
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                k++;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    ft_print_comb();
    return 0;
}


