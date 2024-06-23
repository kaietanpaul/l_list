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

t_movies	*add_movie(t_movies *, char *, char *, int);

void		print_movie(t_movies *);
void		print_all_movies(t_movies *);
void		free_all_movies(t_movies *);

int			kai_strlen(const char *);

char 		*kai_strdup(const char *str);

#endif