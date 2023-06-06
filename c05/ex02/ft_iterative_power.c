/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:12:14 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/23 12:42:57 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	aux = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		aux = aux * nb;
		power--;
	}
	return (aux);
}

/*int main()
{
	int	base;
	int	exp;

	base = 2;
	exp = 4;
	printf("%d", ft_iterative_power(base, exp));
	return (0);
}*/
