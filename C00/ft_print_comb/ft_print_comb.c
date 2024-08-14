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
    int num1;
    int num2;
    int num3;

    num1 = '0';
    while (num1 <= '7')
    {
        num2 = num1 + 1;
        while (num2 <= '8')
        {
            num3 = num2 + 1;
            while (num3 <= '9')
            {
                ft_putchar(num1);
                ft_putchar(num2);
                ft_putchar(num3);
                if (num1 != '7' || num2 != '8' || num3 != '9') // Evitar la última coma y espacio
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                num3++;
            }
            num2++;
        }
        num1++;
    }
}

int main(void)
{
    ft_print_comb();
    return 0;
}
