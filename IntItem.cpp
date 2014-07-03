#include "intItem.h"

IntItem::IntItem(int I, int I2) {i = I; i2 = I2;}

void IntItem::seti(int I){i = I;}

int IntItem::geti() {return i;}

void IntItem::seti2 (int I2) {i2 = I2;}

int IntItem::geti2() {return i2;}