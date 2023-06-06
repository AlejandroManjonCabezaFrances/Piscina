/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:39:58 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/11 11:39:31 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char		i;

	i = 'z';
	while (i >= 'a' )
	{
		write(1, &i, 1);
		i--;
	}
}

/* int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);

