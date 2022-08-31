/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:47:59 by atoof             #+#    #+#             */
/*   Updated: 2022/08/31 13:11:22 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

#define BUFF_SIZE 29900

int main(void)
{
	char 	*str;
	char 	*str_line_1;
	int 	fd, i, line;
	int 	rd_fd;
	char	obstacle;
	char	empty;
	char	fill_sq;
	
	str = (char *)malloc(sizeof(char *) * (BUFF_SIZE + 1));
	str_line_1 = (char *)malloc(sizeof(char *) * (BUFF_SIZE + 1));
	fd = open("example_file", O_RDONLY, S_IRUSR);
	rd_fd = read(fd, str, BUFF_SIZE);
	str[rd_fd] = '\0';
	close(fd);
	// ft_putstr(str);
	// ft_putchar('\n');
	i = 0;
	while (str[i] != '\n')
	{
		str_line_1[i] = str[i];
		i++;
	}
	str_line_1[i] = '\0';
	obstacle = str_line_1[i - 2];
	empty = str_line_1[i - 3];
	fill_sq = str_line_1[i - 1];
	
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}
