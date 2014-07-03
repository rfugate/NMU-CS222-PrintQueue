#ifndef _LLQUEUE_
#define _LLQUEUE_

#include "Queue.h"
#include "LL.h"
#include "Item.h"

class queue;
class LL;
class LLQueue : public queue {
private:
	LL *L;
public: 
	virtual void EnQueue(Item *info);
	virtual Item * DeQueue();
	virtual bool IsEmpty();
	LLQueue();
	~LLQueue();
};
#endif