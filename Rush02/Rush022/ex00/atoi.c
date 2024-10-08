/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_du_cul.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salabbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:31:01 by salabbe           #+#    #+#             */
/*   Updated: 2024/07/28 15:48:16 by salabbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	ft_power(int nb, power)
{
	int	init;
	
	init = nb;
	while (power > 0)
	{
		nb = init * nb;
		power--;
	}
	return (nb);
}

char	*ft_putnbr(int nb)
{
	if (nb >= 10)
		nb = ft_putnbr(nb / 10);
	nb = nb % 10;
	nb = nb + '0';
	return (nb);
}

int	atoi_decompo(char *str)
{
	int	nb;
	int	size;
	int	i;
	char	*tab;

	i = 0;
	size = ft_strlen(str);
	tab = malloc(sizeof(char) * 1000)
	if (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		nb = nb * ft_power(10, size - 1);
		i++;
	}
}
