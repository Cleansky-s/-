#include <iostream>
#include "LinerList.h"
#include <malloc.h>

using namespace std;

typedef struct Node* LinkList;
int main()
{  
	LinkList L;
	InitList(L);
	Insert(L);
	InsertElem(L, 3, 5);
	DeleteElem(L, 5);
	
}

