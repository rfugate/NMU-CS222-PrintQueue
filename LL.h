#ifndef _LL_
#define _LL_

#include "LLNode.h"
#include "Item.h"

class LLNode;
class LL{
private:
	LLNode *head;
public:
	LL();
	~LL();
	void addfront(Item *w);
	Item *removefront();
	bool IsNULL();
	void addback(Item *w);
};

#endif