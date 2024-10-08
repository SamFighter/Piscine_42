/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salabbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:38:34 by salabbe           #+#    #+#             */
/*   Updated: 2024/07/25 13:18:49 by salabbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2 || nb == 3)
		return (1);
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if ((nb % i) != 0)
			i++;
		if (nb % i == 0 && i < nb)
			return (0);
		if (nb % i == 0 && i == nb)
			return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
