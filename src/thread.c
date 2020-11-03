/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arraji <arraji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 05:37:05 by arraji            #+#    #+#             */
/*   Updated: 2020/11/01 00:32:05 by arraji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

/*
**indexs[0]->y
**indexs[1]->x
**indexs[2]-> stop
*/

void		*thread_child(void *param)
{
	int		indexs[3];
	int		*img;
	long	step;

	step = (long)param;
	indexs[0] = (((g_all->wind->wind_y) / THREADS) * step);
	img = (int *)g_all->wind->img_p->pixels;
	indexs[2] = indexs[0] - ((g_all->wind->wind_y) / THREADS);
	if (step == THREADS)
		indexs[0] += g_all->wind->wind_y % THREADS;
	img += (g_all->wind->wind_y - indexs[0]) * g_all->wind->wind_x;
	while (--indexs[0] >= indexs[2])
	{
		indexs[1] = -1;
		while (++indexs[1] < g_all->wind->wind_x)
		{
			get_pixel(indexs, img);
			img++;
		}
	}
	return (NULL);
}

void		hold_threads(pthread_t *threads, int size)
{
	int		index;

	index = 0;
	while (index < size)
	{
		if (pthread_join(threads[index], NULL) != 0)
			ft_exit(E_STD);
		index++;
	}
}

void		threads_parent(void)
{
	pthread_t	threads[THREADS];
	long		part;

	part = 1;
	init_camera(g_all->a_camera, *g_all);
	while (part < THREADS + 1)
	{
		if (pthread_create(&threads[part - 1],
		NULL, thread_child, (void*)part) != 0)
			ft_exit(E_STD);
		part++;
	}
	hold_threads(threads, THREADS);
}
