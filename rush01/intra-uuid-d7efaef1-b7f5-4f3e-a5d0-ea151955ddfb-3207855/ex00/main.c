/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sung-lee <sung-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/06 12:56:57 by sung-lee          #+#    #+#             */
/*   Updated: 2020/06/09 13:51:33 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "mem_alloc.h"
#include "functions.h"
#include "solve_puzzle.h"

int g_max;

int		check_param_num(char *argv[])
{
	int	count;
	int	idx;

	count = 0;
	idx = 0;
	while (argv[1][idx]) //argv 2번째" " 안 인자들 개수 count에 저장
	{
		if (is_num(argv[1][idx]))
			++count;
		++idx;
	}
	if (count % 4 != 0) //인자들 개수가 4로 나누어 떨어지지 않으면 return (-1) -> 오류
		return (-1);
	return (count / 4); //count를 4로 나눈값 return. (ex. 5x5일 경우?)
}

void	init(char *argv[], int **cond, int **board)
{
	int	pos[2];
	int	idx;

	pos[0] = 0;
	pos[1] = 0;
	idx = 0;
	while (argv[1][idx])
	{
		if (is_num(argv[1][idx]))
		{
			cond[pos[0]][pos[1]] = argv[1][idx] - '0';
			board[pos[0]][pos[1]] = 0;
			mv_pos(pos);
		}
		++idx;
	}
}

int		err_chk(int argc, char **argv)
{
	int	param_num;

	if (argc != 2) //인자 개수가 2개가 아닐 때 return 0
	{
		write(1, "Error\n", 6);
		return (0);
	}
	param_num = check_param_num(argv); //오류(-1)일 경우 에러출력
	if (param_num < 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (param_num); //count/4 한 값 = 4 return
}

int		main(int argc, char **argv)
{
	int	**cond;
	int	**board;
	int *permu;

	if (!err_chk(argc, argv)) //에러 있으면 return 0;
		return (0);
	else
		g_max = err_chk(argc, argv); // g_max = 4
	board = board_malloc();
	permu = permu_init();
	cond = cond_alloc();
	init(argv, cond, board);
	solve_puzzle(board, cond, 0, permu);
	return (1);
}
