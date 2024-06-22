#include "l_list.h"

t_movies	*add_movie(t_movies *head, char *title, char *director, int year)
{
	t_movies *movie = malloc(sizeof(t_movies));
	if (!movie)
		return (NULL);
	movie->title = title;
	movie->director = director;
	movie->year = year;
	movie->next = head;
	return (movie);
}

void	print_movie(t_movies *head)
{
	if (head)
	{
		printf("Title: %s\n", head->title);
		printf("Director: %s\n", head->director);
		printf("Year: %i\n", head->year);
	}
}

void	print_all_movies(t_movies *head)
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
		free(temp);
	}
}