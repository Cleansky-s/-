#include <iostream>
#include "LinerList.h"
#include <malloc.h>

using namespace std;

int main()
{  
	LinkList L;
	InitList(L);
	Insert(L);
	for(int i = 0; i <= 9; i++) {
		LinkList P;
		int a[100];
		P = GetElem(L, i + 1);
		if (P == NULL) {
			break;
		};
		a[i] = P->data;
		cout << a[i] << endl;
	}
}