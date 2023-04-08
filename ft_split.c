/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:07:56 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/08 23:36:09 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
/*
static size_t	wordcountido(char const *s, char c)
{
	size_t	i;

//	printf("Hey, i am from wordcountido!\n");
	if (!*s)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s != c && *s)
			s++;
	}
	return (i);
}

static void		allocatido(char **tablo, char const *s, char c)
{
	size_t	i;

	while (*s)
	{
		while (*s == c)
		{
			s++;
			i = 0;
		}
		while (*s && *s != c)
			i++;
		if (*s == c)
		{
			*tablo = ft_substr(s, 0, (char *)(s - i));
			tablo++;
		}
	}
	*tablo = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		cntftwrds;

	if (!s)
		return (NULL);
	cntftwrds = wordcountido(s, c);
	ret = (char **)malloc((sizeof(char*)) * (cntftwrds + 1));
	if (!ret)
		return (NULL);
	allocatido(ret, s, c);
	return (ret);
}*/







int main()
{
	char	test[] = "c,a,bkkkke,cee,deee,eeeef";
	char	**res;
	size_t	i;

	i = 0;
	res = ft_split(test, ',');
	printf("\n\n\nMAINMAINMAINMAINMAINMAINMAINMAINMAIN\n\n\n");
	printf("string to split: %s\n\n", test);
	while (*res[i] != '\0')
	{
		printf("from res: |%s|\n", res[i]);
		i++;
	}
	return (0);
}

static size_t	wordc(const char *s, char c)
{
	int		wflag;
	size_t	wc;

	wc = 0;
	wflag = 0;
	while (*s)
	{
		if (*s == c)
			wflag = 0;
		if (wflag == 0)
		{
			wflag = 1;
			wc++;
		}
		s++;
	}
	return (wc);
}

static size_t	wordlen(const char *s, char c)
{
	size_t	l;

	l = 0;
	while(*s && *s != c)
	{
		l++;
		s++;
	}
	return (l);
}

static void		dumpitintoit(char **ret, const char *s, char c)
{
	size_t	i;
	size_t	l;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			l = wordlen(s, c);
			ret[i] = malloc((l + 1) * (sizeof(char)));
			if (ret[i] == NULL)
			{
				while (i-- > 0)
					free(ret[i]);
				free(ret);
			}
			ft_memcpy(ret[i], (char *)s, l);
			ret[i][l + 1] = '\0';
			s += l;
			i++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	char	**ret;

	wc = wordc(s, c);
	ret = malloc((wc + 1) * (sizeof(char *)));
	if (!ret)
		return (NULL);
	dumpitintoit(ret, s, c);
	ret[wc + 1] = NULL;
	return (ret);
}

/*int		wordl(char *s, char c)
{
	int	i;
	
	i = 0;
	printf("%s\n", s);
	while (s[i] != c && s[i] != '\0')
	{
		printf("i: %d\n", i);
		i++;
	}
	return(i);
}

int		wordc(char *s, char c)
{
	size_t	i;
	int		n;

	i = 0;
	n = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
		{
			n++;
		}
		i++;
	}
	return (n);
}

int		dumpitoit(char *d, char *s, char c)
{
	size_t	i;

	printf("from dumpitoit\n");
	i = 0;
	if (!s || !d)
		return (0);
	printf("afterif from dumpitoit\n");
	printf("string in dumpitoit: |%s|\n", s);
	if (s[i] == c && s[i + 1] == c)
	{
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	while ((s[i] != c) && s[i] != '\0')
	{
		printf("while in a while in dumpitoit\ni: %lu\n", i);
		d[i] = s[i];
		i++;
	}
	printf("afterwhile in dumpitoit\n");
	d[i] = '\0';
	printf("after null character assignment in dumpitoit\n");
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		wl;
	int		wc;
	size_t	i;
	char	*temp;
	char	**ret;

	temp = ft_strdup(s);
	i = 0;
	wc = wordc(temp, c);
	ret = malloc((wc + 1) * sizeof(char *));
	if(!ret)
		return (NULL);
	ret[wc + 1] = NULL;
	printf("word count: %d\n", wc);
	while (ft_strlen(temp))
	{
		wl = wordl(temp, c);
		printf("length of word: %d\n", wl);
		temp = (temp + (wl + 1));
		printf("after temp shift\n");
		ret[i] = malloc((wl + 1) * sizeof(char));
		printf("after ret allocation\n");
		if (!dumpitoit(ret[i], temp, c))
		{
			//fremory()
			return (NULL);
		}
		printf("after if with dumpitoit\n");
		i++;
	}
	ret[i] = ft_calloc(1, sizeof(char));
	ft_memset(ret[i], '\0', 1);
//	free(temp);
	return (ret);
}
*/
