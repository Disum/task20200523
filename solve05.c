#include <string.h>
#include "list.h"
#include "solve05.h"

int solve05(list *head)
{
	int counter, max = 0;
	list *tail, *curr;

	for( tail = head, curr = tail->next; curr; tail = curr, curr = curr->next )
		if(  strcmp(tail->string, curr->string)<0 )
		{
			for( counter = 1; curr; counter++, tail = curr, curr = curr->next )
				if(  strcmp(tail->string, curr->string)>=0 )
					break;

			if( counter>max )
				max = counter;

			if( !curr )
				break;
		}

	return max;
}
