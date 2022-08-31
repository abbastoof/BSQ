/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:58:08 by mtoof             #+#    #+#             */
/*   Updated: 2022/08/29 18:33:02 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*ft_realloc(char *ptr, unsigned int *size)
{
	char	*cpy;

	cpy = (char *)malloc(*size * 2);
	ft_memcpy(cpy, ptr, *size);
	free(ptr);
	return (cpy);
}
