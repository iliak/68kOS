#include <exec/lists.h>

//
//
//
void Insert(struct List *list, struct Node *node, struct Node *pred)
{
	if (!list || !node)
		return;

    if (pred)
    {
		// Our successor is the successor of the node we add ourselves
		// behind and our predecessor is just the node itself.
		node->ln_Succ = pred->ln_Succ;
		node->ln_Pred = pred;

		//We are the predecessor of the successor of our predecessor
		pred->ln_Succ->ln_Pred = node;
		pred->ln_Succ = node;
    }
    else
    {
		// add at the top of the list. 
		node->ln_Succ	       = list->lh_Head;
		node->ln_Pred	       = (struct Node *)&list->lh_Head;
		list->lh_Head->ln_Pred = node;
		list->lh_Head	       = node;
    }
}


