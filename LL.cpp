#include <iostream>
#include <cstdlib>
#include "LL.h"
#include "Item.h"

using namespace std;

LL::LL() {head = NULL;}
LL::~LL() {delete head;}

void LL::addfront(Item *w){
	head = new LLNode(w,head);
}

void LL::addback(Item *w){
	if(head==NULL) head = new LLNode (w,NULL);
	else head->addback(w);
}

Item *LL::removefront(){
	if(!head) return NULL;
	Item *t = head->geti();
	LLNode *n = head;
	head = head->getnext();
	n->setnext(NULL);
	delete n;
	return t;
}

bool LL::IsNULL(){
	return !head;
}