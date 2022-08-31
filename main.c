/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:47:59 by atoof             #+#    #+#             */
/*   Updated: 2022/08/31 19:58:40 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include	<stdio.h>

#define BUFF_SIZE 29900

int main(void)
{
	char 	*str;
	char 	*str_line_1;
	char	*str_body;
	int		obstacle_ptr[30];
	int 	fd, i, j, k;
	int 	rd_fd;
	char	obstacle;
	char	empty;
	char	fill_sq;
	int		row, length,col_i,column;
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
	str_line_1[i] = '\0';	
	obstacle = str_line_1[i - 2];
	empty = str_line_1[i - 3];
	fill_sq = str_line_1[i - 1];
	length = i;
	col_i = i;
	//obstacle positions
	j = 0;
	k = 0;
	row = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			i++;
			str_body[j] = str[i];
		if (str_body[j] == obstacle)
		{
			obstacle_ptr[k] = j;
			k++;
		}
		i++;
		j++;
	}

	//number of rows	
	row = 0;
	while (str[length] != '\0')
	{
		while (str[length] == '\n')
		{
			row++;
			length++;
		}
		length++;
	}
	//number of column
	column = 0;
	while (str[col_i + 1] != '\n')
	{
		column++;
		col_i++;
	}
	while  	
	return (0);
}
