/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_op.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arraji <arraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 04:48:17 by arraji            #+#    #+#             */
/*   Updated: 2020/02/23 16:37:57 by arraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VECTOR_OP_H
# define FT_VECTOR_OP_H
# include "minirt.h"

double	vector_size(t_cord vector);
t_cord	vector_add(t_cord vec_1, t_cord vec_2);
t_cord	vector_sub(t_cord vec_1, t_cord vec_2);
t_cord	vector_mltp(t_cord vec, double num);
t_cord	vector_div(t_cord vec, double num);
t_cord	vector_norm(t_cord vec);
t_cord	cross_prod(t_cord u, t_cord v);
t_cord	new_cord(double x, double y, double z);
double	points_dist(t_cord a, t_cord b);
t_cord	reflected(t_cord vector, t_cord norm);
#endif
