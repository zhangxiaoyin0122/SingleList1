#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int type;
//������ṹ��
typedef struct Node {
	struct Node* _next;
	type _date;
}Node;
//��������ṹ��
typedef struct SingleList {
	Node* _head;
}SingleList;

//�����ʼ��
void SingleListInit(SingleList* sl) {
	sl -> _head = NULL;
}
//����������
Node* creatNode(type date) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->_date = date;
	node->_next = NULL;
	return node;
}
//β��
void SingleListPushBack(SingleList* sl, type date) {

}
//ͷ��
void SingleListPushFront(SingleList* sl, type date) {

}
//βɾ
void SingleListPopBack(SingleList* sl) {

}
//ͷɾ
void SingleListPopFront(SingleList* sl) {

}
//����λ�ú������
void SingleListInsertAfter(Node* pos, type date) {

}
//����λ�ú���ɾ��
void SingleListEraseAfter(Node* pos) {

}
//��������
Node* find(type date) {

}
//���
void SingleListPrint(SingleList* sl) {
	Node* cur = sl->_head;
	while (cur) {
		printf("%d", cur->date);
		cur = cur->_next;
	}
	printf("\n");
}
void singleListDestroy(SingleList* sl) {

}

int main() {

	system("pause");
	return 0;
}