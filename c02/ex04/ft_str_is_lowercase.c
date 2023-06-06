/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:28:15 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/15 07:49:26 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_lowercase(char *str)
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
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			alfa = 1;
		}
		else
			return (0);
		i++;
	}
	return (alfa);
}

/*int	main(void)
{
	char 	str[] = "adfdxvctykln";
	int		resultado;

	resultado = ft_str_is_lowercase(str);
	printf("%d", resultado);
	return (0);
}*/
