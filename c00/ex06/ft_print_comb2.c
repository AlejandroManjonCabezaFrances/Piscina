/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:50:29 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/11 13:22:09 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar_print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_putchar_half(char a, char b)
{
	char	c;
	char	d;

	c = a;
	while (c <= '9')
	{
		d = b + 1;
		while (d <= '9')
		{
			ft_putchar_print(a, b, c, d);
			++d;
		}
		++c;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '8')
		{
			ft_putchar_half(a, b);
			++b;
		}
		++a;
	}
}

/*int main()
{
	ft_print_comb2();
	return(0);
}*/
