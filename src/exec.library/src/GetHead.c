#include <exec/lists.h>


struct Node * GetHead(struct List *list)
{
	if (!list)
		return NULL;

    // Get the address of the first node or NULL
    return list->lh_Head->ln_Succ;
}

