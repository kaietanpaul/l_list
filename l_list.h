#ifndef L_LIST_H
# define L_LIST_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_movies
{
	char	*title;
	char	*director;
	int		year;
	struct s_movies	*next;
}	t_movies;

t_movies	*add_movie(t_movies *head, char *title, char *director, int year);
void		print_movie(t_movies *head);
void		print_all_movies(t_movies *head);
void		free_all_movies(t_movies *head);

#endif