#ifndef _INTITEM_
#define _INTITEM_
#include "Item.h"

class Item;
class IntItem: public Item{
private:
	int i;
	int i2;
public:
	IntItem(int I, int I2);
	void seti(int I);
	int geti();
	void seti2(int I2);
	int geti2();
};

#endif