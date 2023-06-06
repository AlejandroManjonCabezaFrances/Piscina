/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:42:04 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/11 13:06:54 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_funtion_print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < '7')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
	return ;
}

void	ft_print_comb(void)
{
	char	a;
	char	b;	
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_funtion_print(a, b, c);
				++c;
			}
			++b;
		}
		++a;
	}
}

/* int main()
{
	ft_print_comb();
	return (0);
}*/
