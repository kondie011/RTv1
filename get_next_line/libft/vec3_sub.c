/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_sub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knedzing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:24:00 by knedzing          #+#    #+#             */
/*   Updated: 2018/09/04 09:24:06 by knedzing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3	vec3_sub(t_vec3 va, t_vec3 vb)
{
	t_vec3	v;

	v.x = va.x - vb.x;
	v.y = va.y - vb.y;
	v.z = va.z - vb.z;
	return (v);
}