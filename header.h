/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atoof <atoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:51:17 by mtoof             #+#    #+#             */
/*   Updated: 2022/08/31 19:14:22 by atoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
char 	*ft_strcpy(char *dest, char *src);
char	*ft_realloc(char *ptr, unsigned int *size);
void	*ft_memcpy(void *to, const void *from, unsigned int size);

typedef struct	s_col_row
{
	int			row;
	int			column;
	char		inf[3];
}				t_col_row;
#endif

