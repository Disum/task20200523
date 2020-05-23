#include <string.h>
#include "list.h"
#include "solve02.h"

int solve02(list *head)
{
	int counter = 0;
	list *tail, *curr;

	for( tail = head, curr = head->next; curr; tail = curr, curr = curr->next )
		if( strcmp(tail->string, curr->string)<0 )
			counter++;

	return counter;
}
