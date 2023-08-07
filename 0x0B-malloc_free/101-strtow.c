#include "main.h"
#include <stdlib.h>

/**
 * ft_arraycount - Count the number of words in a string
 * @str: char *
 * Return: int
 */

int	ft_arraycount(char *str)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i])
		{
			count++;
			i++;
		}
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (count);
}

/**
 * ft_strlen_sep - count the length of word until space
 * @str: char *
 * Return: int
 */

int	ft_strlen_sep(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != ' ')
			i++;
	return (i);
}

/**
 * ft_word - create a word
 * @str: char *
 * Return: char *
 */

char	*ft_word(char *str)
{
	int		i;
	int		len;
	char	*p;

	len = ft_strlen_sep(str);
	i = 0;
	p = malloc(sizeof(*p) * (len + 1));
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/**
 * strtow - splits a string into words
 * @str: char *
 * Return: char **
 */

char	**strtow(char *str)
{
	char **result;
	int i;
	int len;

	i = 0;
	len = ft_arraycount(str);
	result = malloc(sizeof(char **) * (len + 1));
	if (!result)
		return (0);
	while (i < len)
	{
		while (*str && *str == ' ')
			str++;
		if (*str)
		{
			result[i] = ft_word(str);
			i++;
		}
		while (*str && *str != ' ')
			str++;
	}
	result[i] = 0;
	return (result);
}
