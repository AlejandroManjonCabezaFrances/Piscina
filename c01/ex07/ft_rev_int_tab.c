/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:38:03 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/18 10:17:51 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i < size - 1) 
	{
		aux = tab[i];
		tab[i] = tab[size - 1];
		tab[size -1] = aux;
		i++;
		size--;
	}
}

 int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int size;
	
	ft_rev_int_tab(tab, 4);
	printf("%d %d %d %d", tab[0], tab[1], tab[2], tab[3]);
	return 0;
}
