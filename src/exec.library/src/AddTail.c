
#include <exec/lists.h>


//
//
//
void AddTail(struct List *list, struct Node *node)
{
	if (!list || !node)
		return;

	//Make the node point to the head of the list. Our predecessor is the
	//previous last node of the list.
    node->ln_Succ	       = (struct Node *)&list->lh_Tail;
    node->ln_Pred	       = list->lh_TailPred;

	//Now we are the last now. Make the old last node point to us
	//and the pointer to the last node, too.
    list->lh_TailPred->ln_Succ = node;
    list->lh_TailPred	     = node;

}
