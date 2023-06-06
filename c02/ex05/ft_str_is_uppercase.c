/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:44:06 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/15 07:51:11 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	alfa;

	i = 0;
	alfa = 0;
	if (!str[0])
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			alfa = 1;
		else
			return (0);
		i++;
	}
	return (alfa);
}

/*int main(void)
{
	char	str[] = "ASJYVFJOL";
	int		resultado;

	resultado = ft_str_is_uppercase(str);
	printf("%d", resultado);
	return(0);
}*/
