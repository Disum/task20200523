#include <stdio.h>
#include <time.h>
#include "list.h"
#include "solve08.h"

int main(int argc, char **argv)
{
	list *head, *res_solve;
	int res_read;
	clock_t t_beg;

	if( argc!=2 )
	{
		fprintf(stderr, "Usage: %s file.txt\n", argv[0]);
		return -1;
	}

	res_read = read_list(argv[1], &head);
	if( res_read )
	{
		switch( res_read )
		{
			case -1:
				fprintf(stderr, "Can not open file %s!\n", argv[1]);
				break;
			case -2:
				fprintf(stderr, "Can not read element from %s!\n", argv[1]);
				break;
			case -3:
				fprintf(stderr, "Can not allocate memory!\n");
				break;
			default:
				fprintf(stderr, "Unknown error with code %d!\n", res_read);
		}
		return -1;
	}
	print_list(head);

	t_beg = clock();
	res_solve = solve08(head);
	printf("Answer: \n");
	print_list(res_solve);
	delete_list(head);
	printf("Time = %.2lf sec\n", ( (double)(clock() - t_beg) )/CLOCKS_PER_SEC);
	return 0;
}
