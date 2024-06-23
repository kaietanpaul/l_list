#include "l_list.h"



int	main(void) {
	t_movies *head = NULL;

	head = add_movie(head, "Movie name 9", "Director 9", 2009);
	head = add_movie(head, "Movie name 8", "Director 8", 2008);
	head = add_movie(head, "Movie name 7", "Director 7", 2007);

	head = add_movie_end(head, "Movie name 10", "Director 10", 2010);

	print_all_movies(head);

	free_all_movies(head);

	return (0);
}