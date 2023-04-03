/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:41:46 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/02 18:44:31 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	i = 0;
	dlen = (size_t)ft_strlen(dest);
	slen = (size_t)ft_strlen(src);
	if (dlen >= size)
		return (size + slen);
	while (((size - 1) > (i + dlen)) && src[i] != '\0')
	{
		dest[i + dlen] = src[i];
		i++;
	}
	dest[i + dlen] = '\0';
	return (dlen + slen);
}

/*static size_t	check(char *dest, size_t size)
{
	if (size == 0)
		return (1);
	if (ft_strlen(dest) > (int)size)
		return (1);
	return (0);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (check(dest, size))
		return (NULL);
	while (dest[i] != '\0')
	{
		i++;
		n++;
	}
	size = size - n;
	while (size > 0)
	{
		dest[i] = src[i - n];
		size--;
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i + n);
}
*/

// the cake is a lie !\0I'm hidden lol\r\n 43

/*size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	id;
	size_t	is;
	size_t	dlen;

	id = 0;
	is = 0;
	dlen = (size_t)ft_strlen(dest);
	while (dest[id] != '\0')
		id++;
	while (id > (size + 1) && src[is] != '\0')
	{
		dest[id] = src[is];
		id++;
		is++;
	}
	dest[id] = '\0';
	if ((size_t)ft_strlen(src) < dlen)
		return ((size_t)(ft_strlen(src)) + size);
	if ((size_t)ft_strlen(src) > dlen)
		return ((size_t)(ft_strlen(src)) + dlen);
}*/

/*static size_t	check(char *dest, size_t size)
{
	if (size == 0)
		return (1);
	if (ft_strlen(dest) > (int)size)
		return (1);
	return (0);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	dlen;

	i = 0;
	n = 0;
	if (check(dest, size))
	{
		return ((size_t)ft_strlen(src) + size);
	}
	i = (size_t)ft_strlen(dest);
	n = i;
	size = size - n;
	dlen = i;
	while ((((size - 1) > 0) && src[i - n] != '\0'))
	{
		dest[i] = src[i - n];
		size--;
		i++;
	}
	dest[i] = '\0';
	return ((size_t)ft_strlen(src) + n);
}
*/