#ifndef LIST_H
#define LIST_H

struct _list;
typedef struct _list
	{
		char *string;
		struct _list *next;
	} list;

int read_list(char *name, list **p_head);
void print_list(list *head);
void delete_list(list *head);

#endif
