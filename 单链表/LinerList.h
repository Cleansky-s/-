#ifndef test
#define test

#include< stdlib.h >
#include <iostream>



typedef struct Node {
	int data; 
	struct Node* Next; 
}Node, *LinkList;


LinkList GetElem(LinkList L, int i);
bool InitList(LinkList& L);
LinkList InsertElem(LinkList& L, int i, int e);
LinkList Insert(LinkList& L);
LinkList DeleteElem(LinkList& L, int i);

#endif // !1
