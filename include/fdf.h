/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nromptea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 15:17:20 by nromptea          #+#    #+#             */
/*   Updated: 2016/02/24 19:02:13 by nromptea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft.h"
# include "mlx.h"

# define PI 0.78539816339

typedef struct	s_map
{
	int		nb_col;
	int		nb_line;
	int		**tab;
}				t_map;

typedef struct	s_param
{
	void	*mlx;
	void	*win;
	t_map	map;
}				t_param;

/*
** parse2.c
*/

t_map	*count_line_col(int fd, t_map *map);
t_map	*split_tab(t_map *map, int fd);
void	parsing(char *argv, t_map *map);

/*
** core.c
*/

void	ft_exit(char *str);
void	print_tab(int **tab, int nb_col, int nb_line);
int		main(int argc, char **argv);

/*
**	display.c
*/

int		define_color(int **tab, int i, int j);
int		put_thing(t_param *param);
int		my_key_func(int keycode, void *param);

#endif
