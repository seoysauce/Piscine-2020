/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_alloc.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 22:26:43 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/07 23:20:51 by sung-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_ALLOC_H
# define MEM_ALLOC_H

extern int	g_max;
int			**board_malloc(void);
int			**cond_alloc(void);
int			*permu_init(void);

#endif
