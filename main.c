#include "l_list.h"



int	main(void)
{
	t_movies *head = NULL;

	head = add_movie(head, "Movie name 9", "Director 9", 2009);
	print_movie(head);

	head = add_movie(head, "Movie name 8", "Director 8", 2008);
	print_all_movies(head);

	free_all_movies(head);

	return (0);
}