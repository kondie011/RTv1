/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knedzing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:22:35 by knedzing          #+#    #+#             */
/*   Updated: 2018/05/21 10:37:41 by knedzing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int c;

	if (s1 && s2)
	{
		c = -1;
		while (s1[++c] && c < (int)n)
			if (s1[c] != s2[c])
				return (0);
		if ((s1[c] == '\0' && s2[c] == '\0') || c == (int)n)
			return (1);
	}
	return (0);
}
