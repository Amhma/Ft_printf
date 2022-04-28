#include"libft.h"

static void	free_array(char **split, int y)
{
	int	i;

	i = 0;
	while (i < y)
		free(split[i++]);
	free(split);
}

static int	count_wd(char const *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (!s || !*s)
		return (0);
	while (*(s + i))
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		if (*(s + i))
			count++;
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	return (count);
}

static size_t	slen_wd(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	strscpy(char **split, char const *s, char c)
{
	size_t	y;
	size_t	x;
	size_t	i;

	i = 0;
	y = 0;
	while (s && *(s + i))
	{
		x = 0;
		while (*(s + i) && *(s + i) == c)
			i++;
		while (*(s + i) && *(s + i) != c)
		{
			*(split[y] + x) = *(s + i);
			x++;
			i++;
		}
		if (*(s + i))
			*(split[y] + x) = '\0';
		y++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	int		y;
	char	**split;

	y = -1;
	i = 0;
	split = malloc((count_wd(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (++y < count_wd(s, c) && s)
	{
		while (*(s + i) && *(s + i) == c)
			i++;
		split[y] = malloc((slen_wd(s + i, c) + 1) * sizeof(char));
		if (!split[y])
		{
			free_array(split, y);
			return (NULL);
		}
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	strscpy(split, s, c);
	split[y] = NULL;
	return (split);
}
