/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:32:48 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/19 17:39:59 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	int	fd;

	fd = open("42", O:WRONLY | O_CREAT, S_IRUSR | S_IWUSR)
		if (fd == -1)
		{
			ft_putstr("open() failed\n");
			return (1);
		}
	ft_putnbr(fd);
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n")
	}
	return (0);
}
//OPEN and CLOSE Files
