#include <exec/lists.h>


void Remove(struct Node *node)
{
	if (!node)
		return;

	node->ln_Pred->ln_Succ = node->ln_Succ;
    node->ln_Succ->ln_Pred = node->ln_Pred;
}

