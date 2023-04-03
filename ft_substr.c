/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:19:54 by smelicha          #+#    #+#             */
/*   Updated: 2023/03/27 16:13:58 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = malloc((sizeof(char) * len) + 1);
	while (i < len)
	{
		if (s[i + start] == '\0')
			return (NULL);
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i + 1] = '\0';
	return (ptr);
}
