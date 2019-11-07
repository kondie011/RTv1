/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knedzing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:51:35 by knedzing          #+#    #+#             */
/*   Updated: 2018/09/03 18:51:44 by knedzing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3	vec3_add(t_vec3 va, t_vec3 vb)
{
	t_vec3	v;

	v.x = va.x + vb.x;
	v.y = va.y + vb.y;
	v.z = va.z + vb.z;
	return (v);
}