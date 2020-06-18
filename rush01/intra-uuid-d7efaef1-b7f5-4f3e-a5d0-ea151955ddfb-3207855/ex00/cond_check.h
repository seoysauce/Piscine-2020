/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond_check.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 22:27:09 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/07 23:05:37 by sung-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COND_CHECK_H
# define COND_CHECK_H

extern int	g_max;

int	left_row_check(int *row);
int	right_row_check(int *row);
int	row_check(int *row, int **cond, int row_pos);

#endif
