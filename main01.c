#include <stdio.h>
#include <time.h>
#include "list.h"
#include "solve01.h"

int main(int argc, char **argv)
{
	list *head;
	int res_read, res_solve;
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
	res_solve = solve01(head);
	delete_list(head);
	printf("Answer = %d\tTime = %.2lf sec\n", res_solve, ( (double)(clock() - t_beg) )/CLOCKS_PER_SEC);
	return 0;
}
