#include <iostream>
#include <stdlib.h>
#include <malloc.h>

using namespace std;

typedef struct Node {

	int data;
	struct Node* Next;

}Node, *LinkList;



bool InitList(LinkList &L) {
    L = (Node*)malloc(sizeof(Node));   //������ռ� 
    if (L == NULL)                       //�ж��Ƿ����㹻���ڴ�ռ� 
        printf("�����ڴ�ռ�ʧ��\n");
    L->Next = NULL;                  //��next����ΪNULL,��ʼ����Ϊ0�ĵ����� 
    return true;
}

LinkList Insert(LinkList& L) {
    int x;
    cin >> x;
    Node* s;
    Node* r;
    r = L;
    while(L != NULL && x != 9999){
        s = (Node*)malloc(sizeof(Node));
        s->data = x;
        r -> Next = s;
        r = s;
        cin >> x;
    }
    r->Next = NULL;

    return L;

}

LinkList GetElem(LinkList L, int i) {
    Node* pre;
    pre = L;
    for (int j = 1; j <= i; j++) {
        pre = pre->Next;
    }

    return L;
}

LinkList InsertElem(LinkList& L, int i, int e){
    GetElem(L, i);
    Node* s;
    s = (Node*)malloc(sizeof(Node));
    s->data = e;
    s->Next = L->Next;
    L->Next = s;
    return L;

}

LinkList DeleteElem(LinkList& L, int i) {
    GetElem(L, i);

    Node* p;
    p = L->Next;
    L->Next = p->Next;
    free(p);
    return L;
}