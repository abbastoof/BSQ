/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:47:59 by atoof             #+#    #+#             */
/*   Updated: 2022/08/31 16:46:20 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

#define BUFF_SIZE 29900

int main(void)
{
	char 	*str;
	char 	*str_line_1;
	char	*str_body;
	char	matrix[200];
	int		obstacle_ptr[30];
	int 	fd, i, j, k;
	int 	rd_fd;
	char	obstacle;
	char	empty;
	char	fill_sq;
	int		count, row;
	str = (char *)malloc(sizeof(char *) * (BUFF_SIZE + 1));
	str_line_1 = (char *)malloc(sizeof(char *) * (BUFF_SIZE + 1));
	str_body = (char *)malloc(sizeof(char *) * (BUFF_SIZE + 1));
	fd = open("example_file", O_RDONLY, S_IRUSR);
	rd_fd = read(fd, str, BUFF_SIZE);
	str[rd_fd] = '\0';
	close(fd);
//first row
	i = 0;
	while (str[i] != '\n')
	{
		str_line_1[i] = str[i];
		i++;
	}
//our rows	
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '\n')
		{
			count++;
			i++;
		}
		i++;
	}
	
	row = count;
	str_line_1[i] = '\0';
	obstacle = str_line_1[i - 2];
	empty = str_line_1[i - 3];
	fill_sq = str_line_1[i - 1];
	//obstacle positions
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			i++;
		str_body[j] = str[i];
		if (str_body[j] == obstacle)
		{
			obstacle_ptr[k] = j;
			printf("%d\n", obstacle_ptr[k]);
			k++;
		}
		i++;
		j++;
	}
	//column
	
	return (0);
}
