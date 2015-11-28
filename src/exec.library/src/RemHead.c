#include <exec/lists.h>

//
//
//
struct Node *RemHead(struct List *list)
{
	if (!list)
		return NULL;

    // Get the address of the first node or NULL
	struct  Node * node = list->lh_Head->ln_Succ;
    if (node)
    {
		node->ln_Pred = (struct Node *)list;
		node = list->lh_Head;
		list->lh_Head = node->ln_Succ;
    }

    return node;
}

