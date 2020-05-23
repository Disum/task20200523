#include <string.h>
#include "list.h"
#include "solve08.h"

list *solve08(list *head)
{
	list *gap, *old_tail = head, *tail = old_tail->next, *curr = tail->next;

	if( strcmp(old_tail->string, tail->string)>=0 )
	{
		for( ; curr; old_tail = tail, tail = curr, curr = curr->next )
			if( strcmp(tail->string, curr->string)<0 )
				break;

		old_tail->next = 0;
		delete_list(head);
		head = tail;
	}

	for( old_tail = head, tail = old_tail->next, curr = tail->next; curr; old_tail = tail, tail = curr, curr = curr->next )
	{
		if( strcmp(tail->string, curr->string)>=0 )
		{
			gap = old_tail;

			for( old_tail = tail, tail = curr, curr = curr->next; curr; old_tail = tail, tail = curr, curr = curr->next )
				if( strcmp(tail->string, curr->string)<0 )
					break;

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
