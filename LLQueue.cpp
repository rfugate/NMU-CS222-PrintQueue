#include "LLQueue.h"
#include "LL.h"
#include "Item.h"

LLQueue::LLQueue() {L = new LL();}
LLQueue::~LLQueue() {delete L;}

void LLQueue::EnQueue(Item *info){
	L->addback(info);
}

Item * LLQueue::DeQueue(){
	return L->removefront();
}

bool LLQueue::IsEmpty(){
	return L->IsNULL();
}