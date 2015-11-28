#include <string.h>
#include <exec/lists.h>


//
// Find a system list node with a given name
//
struct Node *FindName(struct List *list, STRPTR name)
{
	if (!list || !name)
		return NULL;


	// Look through the list
	struct Node *node = list->lh_Head;

	while (node->ln_Succ != NULL)
	{
		if (!strcmp(node->ln_Name, name))
			break;

		node = node->ln_Succ;
	}

	return node;
}
