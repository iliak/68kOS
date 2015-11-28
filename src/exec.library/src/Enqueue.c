#include <exec/lists.h>


void Enqueue(struct List *list, struct Node *node)
{
	if (!list || !node)
		return;

	struct Node *next = NULL;

	// Look through the list 
	for (next = list->lh_Head->ln_Succ ? list->lh_Head : NULL;							// Find the head node
		next;
		next = (next && next->ln_Succ && next->ln_Succ->ln_Succ) ? next->ln_Succ : NULL)	// Find the next node
	{

		// if the NEXT node has lower prio than the new node, insert us before the next node
		if (node->ln_Pri >= next->ln_Pri)
		{
			// Same as insert but insert before instead of insert behind 
			node->ln_Succ = next;
			node->ln_Pred = next->ln_Pred;

			next->ln_Pred->ln_Succ = node;
			next->ln_Pred = node;

			// Done. We cannot simly break the loop because of the AddTail() below.	    
			return;
		}
	}

	//If no nodes were in the list or our node has the lowest prio, we add it as last node
	node->ln_Succ = (struct Node *)&list->lh_Tail;
	node->ln_Pred = list->lh_TailPred;

	list->lh_TailPred->ln_Succ = node;
	list->lh_TailPred = node;

}


