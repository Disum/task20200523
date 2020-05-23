#include <string.h>
#include "list.h"
#include "solve10.h"

list *solve10(list *head)
{
	list *old_tail, *tail, *curr;

	old_tail = head;
	if( !(tail = old_tail->next) )
		return head;
	curr = tail->next;
	while( strcmp(old_tail->string, tail->string)>=0 )
	{
		for( ; curr; tail = curr, curr = curr->next )
			if( strcmp(tail->string, curr->string)<0 )
				break;

		tail->next = 0;
		delete_list(head);
		if( !(head = curr) )
			return head;

		old_tail = head;
		if( !(tail = old_tail->next) )
			return head;
		curr = tail->next;
	}

	while( curr )
	{
		if( strcmp(tail->string, curr->string)>=0 )
		{
			for( tail = curr, curr = curr->next; curr; tail = curr, curr = curr->next )
				if( strcmp(tail->string, curr->string)<0 )
					break;

			tail->next = 0;
			delete_list(old_tail->next);
			old_tail->next = curr;
			if( !(tail = curr) )
				break;
			curr = curr->next;
			continue;
		}

		old_tail = tail;
		tail = curr;
		curr = curr->next;
	}

	return head;
}
