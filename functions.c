#include "l_list.h"

void		print_movie(t_movies *head)
{
	if (head)
	{
		printf("\nTitle: %s\n", head->title);
		printf("Director: %s\n", head->director);
		printf("Year: %i\n", head->year);
	}
}

void		print_all_movies(t_movies *head)
{
	while (head != NULL)
	{
		print_movie(head);
		head = head->next;
	}
}

void		free_all_movies(t_movies *head)
{
	while (head != NULL)
	{
		t_movies *temp = head;
		head = head->next;
		free(temp->director);
		free(temp->title);
		free(temp);
	}
}

int 		kai_strlen(const char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

char 		*kai_strdup(const char *str)
{
	int i = 0;
	char *copied_str = malloc(kai_strlen(str) + 1);
	if (!copied_str)
		return (NULL);

	while (str[i] != '\0')
	{
		copied_str[i] = str[i];
		i++;
	}
	copied_str[i] = '\0';

	return (copied_str);
}

t_movies	*add_movie(t_movies *head, char *title, char *director, int year)
{
	t_movies *movie = malloc(sizeof(t_movies));
	if (!movie)
		return (NULL);

	movie->title = kai_strdup(title);
	movie->director = kai_strdup(director);
	movie->year = year;
	movie->next = head;

	return (movie);
}

t_movies	*add_movie_end(t_movies *head, char *title, char *director, int year)
{
	if (!head)
		return (add_movie(head, title, director, year));

	t_movies *last_movie = malloc(sizeof(t_movies));
	if (!last_movie)
		return (NULL);

	t_movies *tmp = head;

	last_movie->title = kai_strdup(title);
	last_movie->director = kai_strdup(director);
	last_movie->year = year;
	last_movie->next = NULL;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = last_movie;

	return (head);
}