/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:21:08 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/11 13:46:43 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{	
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
int main()
{
	int x;
	int y;

	x = 5;
	y = 3;

	ft_swap(&x, &y);

	
	return (0);
}
*/