/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:43:50 by smelicha          #+#    #+#             */
/*   Updated: 2023/03/23 18:26:58 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strlen(char *str);
static int	is_there(char *str, char *set, size_t pos);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	si;
	char	*ptr;

	start = 0;
	end = ft_strlen((char *) s1) - 1;
	si = 0;
	while (is_there((char *)s1, (char *)set, start))
		start++;
	while (is_there((char *)s1, (char *)set, end))
		end--;
	end++;
	printf("start: %lu\nend: %lu\n\n", start, end);
	ptr = malloc(sizeof(char) * (end - start) + 1);
	if (ptr == NULL)
		return (NULL);
	while (start < end)
	{
		ptr[si] = s1[start];
		si++;
		start++;
	}
	ptr[start] = '\0';
	return (ptr);
}

static int	is_there(char *str, char *set, size_t pos)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (str[pos] == set[i])
			return (1);
		else
			i++;
	}
	return (0);
}
