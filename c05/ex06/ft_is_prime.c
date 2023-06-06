/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:31:16 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/23 10:14:38 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (c < nb)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}

/*int	main(void)
{

	printf("%d", ft_is_prime(-1));
	return(0);
}*/
