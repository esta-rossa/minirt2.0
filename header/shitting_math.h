/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shitting_math.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arraji <arraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:51:13 by arraji            #+#    #+#             */
/*   Updated: 2020/02/23 16:37:38 by arraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHITTING_MATH_H
# define FT_SHITTING_MATH_H
# include "minirt.h"

void		set_cord(t_cord *point, double x, double y, double z);
double		dot_pr(t_cord u, t_cord v);
double		deg_to_rad(double deg);
t_cord		rodrigues_rot(t_cord vec, t_cord rot, double angle);
#endif
