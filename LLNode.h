#ifndef _LLNODE_
#define _LLNODE_

#include "Item.h"

class Item;
class LLNode{
private:
	Item *i;
	LLNode *next;
public:
	LLNode(Item * w, LLNode *n);
	~LLNode();
	Item * geti();
	void setnext(LLNode *n);
	LLNode *getnext();
	void addback(Item *w);
	void seti(Item *n);
};

#endif