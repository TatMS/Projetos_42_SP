/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatiana <tatiana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 17:41:15 by tatmarti          #+#    #+#             */
/*   Updated: 2026/06/09 18:24:45 by tatiana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(const char *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			w++;
		i++;
	}
	return (w);
}

static	char	*word_dup(const char *s, int start, int end)
{
	char	*w;
	int		i;

	w = malloc(end - start + 1);
	if (!w)
		return (NULL);
	i = 0;
	while (start < end)
		w[i++] = s[start++];
	w[i] = '\0';
	return (w);
}

static	void	free_all(char **a, int i)
{
	while (i--)
		free (a[i]);
	free (a);
}

char	**ft_split(char const *s, char c)
{
	t_split	sp;

	if (!s)
		return (NULL);
	sp.r = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!sp.r)
		return (NULL);
	sp.i = 0;
	sp.j = 0;
	while (s[sp.i])
	{
		if (s[sp.i] == c)
			sp.i++;
		else
		{
			sp.start = sp.i;
			while (s[sp.i] && s[sp.i] != c)
				sp.i++;
			sp.r[sp.j] = word_dup(s, sp.start, sp.i);
			if (!sp.r[sp.j++])
				return (free_all(sp.r, sp.j - 1), NULL);
		}
	}
	return (sp.r[sp.j] = NULL, sp.r);
}
