/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_puzzle.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 22:28:37 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/07 23:17:22 by sung-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOLVE_PUZZLE_H
# define SOLVE_PUZZLE_H

extern int	g_max;
void		record_board(int **board, int row, int *val);
void		restore_board(int **board, int row);
void		print_board(int **board);
void		final_chk(int **board, int **cond, int row);
void		solve_puzzle(int **board, int **cond, int row, int *val);

#endif
