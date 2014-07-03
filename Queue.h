#ifndef _QUEUE_
#define _QUEUE_
#include "Item.h"

//Interface:  no data fields, and all methods are virtual

class Item;
class queue {
public:
	virtual void EnQueue (Item *info) = 0;
	virtual Item * DeQueue () = 0;
	virtual bool IsEmpty () = 0;

};

#endif