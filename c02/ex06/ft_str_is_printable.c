/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:18:10 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/15 07:52:54 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	alfa;

	i = 0;
	alfa = 0;
	if (!str[0])
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			alfa = 1;
		else
			return (0);
		i++;
	}
	return (alfa);
}

/*int main(void)
{
	char	str[] = "%!";
	int		resultado;

	resultado = ft_str_is_printable(str);
	printf("%d", resultado);
	return(0);
}*/
