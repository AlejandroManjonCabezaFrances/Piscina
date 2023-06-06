/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:18:57 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/21 14:16:36 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	aux;

	i = 1;
	aux = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	while (i < nb)
	{
		aux = aux * (nb - 1);
		nb--;
	}
	return (aux);
}

/*int	main(void)
{	
	int	res;
	int	nb;
	
	nb = 3;
	res = ft_iterative_factorial(nb);
	printf("el factorial de %d es %d", nb, res);
	return(0);
}*/
