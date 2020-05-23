#include <string.h>
#include <stdio.h>//
#include "list.h"
#include "solve04.h"

int solve04(list *head)
{
	int i = 2, last = 0, dist, max = 0;
	list *old_tail, *tail, *curr;

	old_tail = head;
	if( !(tail = old_tail->next) )
		return max;
	if( strcmp(old_tail->string, tail->string)>=0 )
		last = 1;
	curr = tail->next;

	if( !last )
		for( ; curr; i++, old_tail = tail, tail = curr, curr = curr->next )
			if( strcmp(old_tail->string, tail->string)<=0 && strcmp(tail->string, curr->string)>=0 )
			{
				last = i;
				break;
			}
	if( last )
	{
		for( ; curr; i++, old_tail = tail, tail = curr, curr = curr->next )
			if( strcmp(old_tail->string, tail->string)<=0 && strcmp(tail->string, curr->string)>=0 )
			{
				dist = i - last - 1;
				if( dist>max )
					max = dist;
				last = i;
			}

		if( strcmp(old_tail->string, tail->string)<=0 )
		{
			dist = i - 1 - last;
			if( dist>max )
				max = dist;
		}
	}

	return max;
}
