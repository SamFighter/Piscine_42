/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salabbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:01:42 by salabbe           #+#    #+#             */
/*   Updated: 2024/07/10 18:24:47 by salabbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0 && nb != -2147483648)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb >= 10 && nb != -2147483648)
		{
			ft_putnbr(nb / 10);
		}
		nb = nb % 10;
		ft_putchar(nb + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a < 10)
				ft_putchar('0');
			ft_putnbr(a);
			ft_putchar(' ');
			if (b < 10)
				ft_putchar('0');
			ft_putnbr(b);
			b++;
			if (a != 98)
				write(1, ", ", 2);
		}
		a++;
	}
}
