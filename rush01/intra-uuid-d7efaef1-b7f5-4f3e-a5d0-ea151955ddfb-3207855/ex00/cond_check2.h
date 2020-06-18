/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cond_check2.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 22:19:18 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/07 23:11:12 by sung-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COND_CHECK2_H
# define COND_CHECK2_H

extern int	g_max;
int			col_rep_check(int **board, int col);
int			top_col_check(int **board, int col);
int			up_col_check(int **board, int col);
int			col_check(int **board, int **cond, int col);

#endif
