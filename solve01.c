#include <string.h>
#include "list.h"
#include "solve01.h"

int solve01(list *head)
{
	int counter = 1, res_cmp;
	list *curr;
	char *max = head->string;

	if( !head->next )
		return counter;
	for( curr = head->next; curr; curr = curr->next )
	{
		res_cmp = strcmp(curr->string, max);

		if( !res_cmp )
			counter++;
		else
			if( res_cmp>0 )
			{
				counter = 1;
				max = curr->string;
			}
	}

	return counter;
}
