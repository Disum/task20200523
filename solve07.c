#include <string.h>
#include "list.h"
#include "solve07.h"

int solve07(list *head)
{
	int i, last = 0, dist, max = 0;
	list *tail = head, *curr = tail->next;

	for( i = 1; curr; i++, tail = curr, curr = curr->next )
		if(  strcmp(tail->string, curr->string)==0 )
		{
			for( ; curr; i++, tail = curr, curr = curr->next )
				if(  strcmp(tail->string, curr->string)!=0 )
					break;

			if( !curr )
				return max;

			last = i;
			break;
		}

	if( last )
	{
		for( ; curr; i++, tail = curr, curr = curr->next )
			if(  strcmp(tail->string, curr->string)==0 )
			{
				dist = i - last - 1;
				if( dist>max )
					max = dist;

				for( ; curr; i++, tail = curr, curr = curr->next )
					if(  strcmp(tail->string, curr->string)!=0 )
						break;

				if( !curr )
					break;

				last = i;
			}
	}

	return max;
}
