/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inters.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arraji <arraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 18:45:28 by arraji            #+#    #+#             */
/*   Updated: 2020/02/23 16:37:05 by arraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INTERS_H
# define FT_INTERS_H
# include "minirt.h"

int		sp_inters(t_obj *o, t_camera camera, double *t);
int		plan_inters(t_obj *o, t_camera camera, double *t);
int		inters(t_obj *obj, t_camera camera, double *t);
int		disk_iners(t_obj o, t_camera camera, double *t);
int		cyl_inters(t_obj *o, t_camera camera, double *t);
void	put_cap(t_pars *pars, t_obj *obj);
int		triangle_inters(t_obj *o, t_camera camera, double *t);
int		squar_inters(t_obj *o, t_camera camera, double *t);
int		disk_inters(t_obj *o, t_camera camera, double *t);
int		cone_inter(t_obj *o, t_camera camera, double *t);
#endif
