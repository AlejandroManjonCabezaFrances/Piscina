/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:45:49 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/23 08:59:44 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power > 0)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (1);
}

/*int main (void)
{
	int base;
	int exp;

	base = 5;
	exp = 2;
	printf("%d", ft_recursive_power(base, exp));
	return (0);
}*/
