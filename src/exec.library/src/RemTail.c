#include <exec/lists.h>


//
//
//
struct Node * RemTail(struct List *list)
{
	if (!list)
		return NULL;

    // Get the last node of the list
	struct Node * node = list->lh_TailPred->ln_Pred ? list->lh_TailPred : NULL;
    if (node)
    {
		node->ln_Pred->ln_Succ = node->ln_Succ;
		node->ln_Succ->ln_Pred = node->ln_Pred;
    }

    return node;
}



