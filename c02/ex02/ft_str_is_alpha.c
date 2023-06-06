/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:00:42 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/15 07:45:31 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alfa;

	i = 0;
	alfa = 0;
	if (!str[0])
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			alfa = 1;
		else
		{
			alfa = 0;
			return (alfa);
		}
		i++;
	}
	return (alfa);
}

/*int main()
{
	char str[] = "Alex";
	int resultado;

	resultado = ft_str_is_alpha(str);
	printf("%d", resultado);
	return(0);
}*/
