/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:36:34 by smelicha          #+#    #+#             */
/*   Updated: 2023/03/23 18:26:12 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	size_t	i;
	char	*ptr;

	i = 0;
	l1 = ft_strlen((char *)s1);
	l2 = ft_strlen((char *)s2);
	ptr = malloc(sizeof(char) * (l1 + l2 -1));
	if (ptr == NULL)
		return (NULL);
	while (i < l1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (l1 + l2))
	{
		ptr[i] = s2[i - l1];
		i++;
	}
	return (ptr);
}
