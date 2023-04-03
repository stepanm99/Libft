/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smelicha <smelicha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 18:46:11 by smelicha          #+#    #+#             */
/*   Updated: 2023/04/03 17:13:00 by smelicha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		negflag;
	int		n;

	i = 0;
	n = 0;
	negflag = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		if (str[i] == '-')
			negflag = (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * negflag);
}





/*{
	size_t	i;
	int		n;
	int		n_flag;

	i = 0;
	n = 0;
	n_flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] <= 32)
			&& (str[i + 1] > 0 && str[i + 1] <= 32))
		{
			while (str[i] > 0 && str[i] < 32)
				i++;
			i--;
		}
		if (str[i + 1] == ' ')
			return ((n * 10 + (str[i] - '0')) * n_flag);
		if (str[i] >= '0' && str[i] <= '9')
			n = (n * 10 + (str[i] - '0'));
		if ((str[i] == '-' && !(str[i+1] >= '0' && str[i+1] <= '9'))
			|| ((str[i] >= '0' && str[i] <= '9') && !(str[i+1] >= '0' && str[i+1] <= '9'))
			|| (!(str[i] >= '0' && str[i] <= '9') && str[i] == ' '))
			return (n * n_flag);
		i++;
	}
	return (n * n_flag);
}*/
/*
static int	srev(char *str)
{
	int	i;
	int	m;
	int	nr;

	i = ft_strlen(str) - 1;
	m = 1;
	nr = 0;
	while (i >= 0)
	{
		if (str[i] == '+')
			return (nr);
		if (str[i] == '-')
			return ((nr * (-1)));
		nr = nr + ((str[i] - '0') * m);
		m = m * 10;
		i--;
	}
	return (nr);
}
*/
/*int	ft_atoi(const char *str)
{
	char	tmp[10];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '-'))
		return (0);
	while (str[i] != '\0')
	{
		if (((str[i] >= '0' && str[i] <= '9')
				|| ((str[i] == '+' || str[i] == '-'))) || str[i] == ' ')
		{
			tmp[j] = str[i];
			tmp[j + 1] = '\0';
			j++;
		}
		if (str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
			|| str[i] == '\n' || str[i] == ' ')
			i++;
		if ((str[i] < '0' || str[i] > '9') && !(str[i] == '+' || str[i] == '-'))
		{
			tmp[j + 1] = '\0';
			return (srev(tmp));
		}
		i++;
	}
	return (srev(tmp));
}*/
/*

		if (str[i] == '-')
			n_flag = (-1);
		if (str[i] >= '0' && str[i] <= '9')
			n = (n * 10 + (str[i] - '0'));
		if ((str[i] == '-' && !(str[i+1] >= '0' && str[i+1] <= '9'))
			|| ((str[i] >= '0' && str[i] <= '9') && !(str[i+1] >= '0' && str[i+1] <= '9'))
			|| (!(str[i] >= '0' && str[i] <= '9') && str[i] == ' '))
			return (n * n_flag);

*/




/*//static int	srev(char *str);
var[0] - digit flag 0 = digit found 1 = digit not found
var[1] - neg flag 0 = positive -1 = negative -2+ = more minus signs -> var[0] = 1
var[2] - occurence of the first digit
var[3] - occurence of the last digit
var[4] - digit itself
*/


/*
int			ft_isdigit(int arg);
static void	get_first_digit(const char *str, int *var);
static void	get_last_digit(const char *str, int *var);
static void	make_integer(const char *str, int *var);
static void	init_var(int *var);

int	ft_isdigit(int arg)
{
	return (arg > 47 && arg < 58);
}
int	ft_isalnum(int a)
{
	return ((a > 47 && a < 58) || (a > 64 && a < 91) || (a > 96 && a < 123));
}


int	ft_atoi(const char *str)
{
	int	var[5];

	init_var(var);
	get_first_digit(str, var);
	if (var[1] < -1)
		var[0] = 1;
	get_last_digit(str, var);
	make_integer(str, var);
	if (var[0] == 0)
		return (var[4]);
	return (0);
}
static void	get_first_digit(const char *str, int *var)
{
	while (!ft_isdigit(str[var[2]]))
	{
		if (ft_isalnum(str[var[2]]))
		{
			var[0] = 0;
			return ;
		}
		else
			var[0] = 1;
		if (str[var[2]] == '-')
			var[1]--;
		var[2]++;
	}
	printf("first digit: 0: %d 1: %d 2: %d 3: %d 4: %d\n\n", var[0], var[1], var[2], var[3], var[4]);
	return ;
}

static void	get_last_digit(const char *str, int *var)
{
	var[3] = var[2];
	while (ft_isdigit(var[3]))
		var[3]++;
	printf("last digit: 0: %d 1: %d 2: %d 3: %d 4: %d\n\n", var[0], var[1], var[2], var[3], var[4]);
	return ;
}

static void	make_integer(const char *str, int *var)
{
	if (!var[0])
	{
		while (var[2] <= var[3])
		{
			var[3]--;
			var[4] = (var[4] * 10 + (str[var[3]] - '0'));
			printf("make integer: number: %d\nnumber from string: %c\n\n", var[4], str[var[3]]);
			printf("0: %d 1: %d 2: %d 3: %d 4: %d\n\n", var[0], var[1], var[2], var[3], var[4]);
		}
	}
	
	return ;
}

static void	init_var(int *var)
{
	var[0] = 0;
	var[1] = 0;
	var[2] = 0;
	var[3] = 0;
	var[4] = 0;
	return ;
}
*/