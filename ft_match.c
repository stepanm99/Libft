/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:14:56 by smelicha          #+#    #+#             */
/*   Updated: 2023/12/01 19:15:22 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_match(const char *str1, const char *str2)
{
	int	i;
	int	j;
	int	k;

	if (str1 == NULL || str2 == NULL)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (str1[j] != '\0')
		j++;
	while (str2[k] != '\0')
		k++;
	while ((str1[i] == str2[i]) && (str1[i] != '\0' || str2[i] != '\0'))
		i++;
	if (j == k && j == i)
		return (i);
	else
		return (0);
}
