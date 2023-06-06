/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:37:25 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/19 20:15:36 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Lectura de ficheros:

#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	aux;
	FILE 	*f;

	f = fopen ("text.rtf", "r");
	if (f == NULL)
	{
		printf("No se ha podido abrir el fichero.\n");
		exit (1);
	}

	while (aux != EOF)	//f : es nuestro fichero. EOF (fin de fichero)
	{
		aux = fgetc(f);
		printf("%c", aux);
	}
	printf("\n");
	return (0);
}
