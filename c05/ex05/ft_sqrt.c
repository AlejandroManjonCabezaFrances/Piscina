/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:14:49 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/22 18:20:59 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	c;

	c = 0;
	if (nb <= 0)
		return (0);
	while (c * c < nb)
	{
		if (c > 46340)
			return (0);
		c++;
	}
	if (c * c == nb)
		return (c);
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_sqrt(4));	
	return (0);
}*/
