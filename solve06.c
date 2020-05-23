#include <string.h>
#include "list.h"
#include "solve06.h"

int solve06(list *head)
{
	int counter = 0;
	list *tail, *curr;

	for( tail = head, curr = tail->next; curr; tail = curr, curr = curr->next )
		if(  strcmp(tail->string, curr->string)==0 )
		{
			counter++;

			for( ; curr; tail = curr, curr = curr->next )
				if(  strcmp(tail->string, curr->string)!=0 )
					break;

			if( !curr )
				break;
		}

	return counter;
}
