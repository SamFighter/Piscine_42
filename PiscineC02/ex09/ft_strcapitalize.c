/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salabbe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:03:24 by salabbe           #+#    #+#             */
/*   Updated: 2024/07/22 11:30:53 by salabbe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	uppercase(char str)
{
	return (!(str < 'A' || str > 'Z'));
}

int	lowercase(char str)
{
	return (!(str < 'a' || str > 'z'));
}

int	is_alpha(char *str)
{
	if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		return (1);
	if (*str >= 48 && *str <= 57)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;
	char	*ptr2;

	ptr = str;
	ptr2 = str + 1;
	if (lowercase(*ptr))
		*ptr -= 32;
	while (*ptr != '\0')
	{
		if (is_alpha(ptr) && uppercase(*ptr2))
			*ptr2 += 32;
		else if (!is_alpha(ptr) && lowercase(*ptr2))
			*ptr2 -= 32;
		ptr++;
		ptr2++;
	}
	return (str);
}
