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

void	ft_putchar(char c)
{
	write(1, &c, 1);
	
}

void	ft_print_reverse_alphabet(void)
{
	char c;

	c = 122;
	while(c >= 97)
	{
		ft_putchar(c);
		c--;
	}
}
int main (void)
{
	ft_print_reverse_alphabet();
}
