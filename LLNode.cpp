#include "LLNode.h"
#include "Item.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

LLNode::LLNode(Item *w, LLNode *n){i = w; next = n;}

void LLNode::addback(Item *w){
	if(next == NULL) next = new LLNode(w,NULL);
	else next->addback(w);
}

LLNode::~LLNode(){delete next;}

Item * LLNode::geti(){return i;}

void LLNode::seti(Item *n) {i = n;}

void LLNode::setnext(LLNode *n) {next = n;}

LLNode * LLNode::getnext() {return next;}