#include <string.h>
#include <stdio.h>//!
#include "list.h"
#include "solve09.h"

list *solve09(list *head)
{
	list *gap, *old_tail, *tail, *curr;

	old_tail = head;
	if( !(tail = old_tail->next) )
		return head;
	curr = tail->next;

	printf("\n\n");
	for( ; curr; old_tail = tail, tail = curr, curr = curr->next )
	{
		if( strcmp(old_tail->string, tail->string)<=0 && strcmp(tail->string, curr->string)>=0 )
		{
			gap = old_tail;

			for( old_tail = tail, tail = curr, curr = curr->next; curr; old_tail = tail, tail = curr, curr = curr->next )
			{
				printf("%s\n", tail->string);
				if( strcmp(old_tail->string, tail->string)<=0 && strcmp(tail->string, curr->string)>=0 )
					break;
			}

			printf("%s\n", tail->string);

			old_tail->next = 0;
			delete_list(gap->next);
			gap->next = tail;
			old_tail = gap;
			if( !curr )
				break;
		}
	}

	return head;
}
