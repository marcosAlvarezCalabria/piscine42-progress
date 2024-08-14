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

void ft_print_comb2(void)
{
    char num1;
    char num2;

    num1 = 0;
    while (num1 <= 98)
    {
        num2 = num1 + 1;//num2 empieza en 1 en la primaera vuelta lueh¡go se va sumando 
        while (num2 <= 99)
        {
            ft_putchar((num1 / 10) + '0'); // Decenas de num1
            ft_putchar((num1 % 10) + '0'); // Unidades de num1
            ft_putchar(' ');
            ft_putchar((num2 / 10) + '0'); // Decenas de num2
            ft_putchar((num2 % 10) + '0'); // Unidades de num2
            if (num1 != 98 || num2 != 99) // Evitar la última coma y espacio esto es 98 por que no podia ser 99 se repetirian
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            num2++;
        }
        num1++;
    }
}

int main(void)
{
    ft_print_comb2();
    return 0;
}
//el resultado es como esto :

//00 01, 00 02, 00 03, ..., 00 99, primera vuelta 
//01 02, 01 03, 01 04, ..., 01 99, segunda vuelta 
//02 03, 02 04, 02 05, ..., 02 99,
//03 04, 03 05, 03 06, ..., 03 99,
