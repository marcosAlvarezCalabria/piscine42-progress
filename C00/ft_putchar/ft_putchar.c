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
int main()
{
	ft_putchar('h');
	ft_putchar('\n');
	ft_putchar(58);

return 0;
}
