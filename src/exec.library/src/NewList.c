#include <exec/lists.h>

//
//
//
void NewList(struct List *list)
{
	if (!list)
		return;

	list->lh_Head = (struct Node *)&list->lh_Tail;
	list->lh_Tail = NULL;
	list->lh_TailPred = (struct Node *)&list->lh_Head;
	list->lh_Type = 0;
	list->l_pad = 0;
}

/*
//
//
//
void NewList(struct MinList *list)
{
	if (!list)
		return;

	list->Head = list->Tail;
	list->Tail = NULL;
	list->TailPred = list->Head;
}
*/
