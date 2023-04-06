/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:43:50 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/06 21:59:24 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



static int	is_there(const char *str, const char *set, size_t pos);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	si;
	char	*ptr;

	start = 0;
	end = ft_strlen(s1) - 1;
	si = 0;
	// printf("before setcheck\n");
//	if (!set)
//		return (NULL);
	// printf("after setcheck\n");
	while (is_there(s1, set, start))
		start++;
//	if (start)
//		start--;
	while (is_there(s1, set, end))
		end--;
	end++;
	// printf("after whiles\n");
	// printf("start: %lu end: %lu\n", start, end);
	if (end != 0)
	{
		ptr = malloc(sizeof(char) * (end - start) + 1);
//		printf("n from if end: %lu\nn from start: %lu\n", end, start);
	}
	else
		ptr = malloc(sizeof(char) * 1);
	// printf("before pointer check\n");
	if (!ptr)
		return (NULL);
	// printf("after pointer check\n");
	while (start < end)
	{
		ptr[si] = s1[start];
		si++;
		start++;
	}
	ptr[start] = '\0';
	return ((char *)ptr);
}

static int	is_there(const char *str, const char *set, size_t pos)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (str[pos] == set[i])
			return (1);
		i++;
	}
	return (0);
}

///*
int	main()
{
	char	str[] = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n";
	char	set[] = "Hello \t  Please\n Trim me !";

//	printf("String:\n|%s|\n\nTrimmed string:\n|%s|\n", str, ft_strtrim(str, set));
	return (0);
}
//*/