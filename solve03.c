#include <string.h>
#include "list.h"
#include "solve03.h"

int solve03(list *head)
{
	int counter = 0;
	list *old_tail, *tail, *curr;

	old_tail = head;
	if( !(tail = old_tail->next) )
		return counter;
	if( strcmp(old_tail->string, tail->string)>=0 )
		counter++;
	curr = tail->next;

	for( ; curr; old_tail = tail, tail = curr, curr = curr->next )
		if( strcmp(old_tail->string, tail->string)<=0 && strcmp(tail->string, curr->string)>=0 )
			counter++;

	if( strcmp(old_tail->string, tail->string)<=0 )
		counter++;

	return counter;
}
