/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanjon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:53:41 by amanjon-          #+#    #+#             */
/*   Updated: 2022/11/19 18:13:36 by amanjon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include"j12.h"

#include BUF_SIZE 4096

int main()
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}	
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\n';
	ft_putnbr(ret);
	ft_putstr(buf);
	if (close(fd) == -1)
		ft_putstr("close() error");
		return (1);

	}
	return(0);
}
