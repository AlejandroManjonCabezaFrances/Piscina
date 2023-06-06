/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:08:05 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/15 07:47:19 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	alfa;

	i = 0;
	alfa = 0;
	if (!str[0])
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			alfa = 1;
		else
			return (0);
		i++;
	}
	return (alfa);
}

/*int main(void)
{
	char	str[] = "12554k554";
	int		resultado;

	resultado = ft_str_is_numeric(str);
	printf("%d", resultado);
	return(0);
}*/
