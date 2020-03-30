#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int type;
//定义结点结构体
typedef struct Node {
	struct Node* _next;
	type _date;
}Node;
//定义链表结构体
typedef struct SingleList {
	Node* _head;
}SingleList;

//链表初始化
void SingleListInit(SingleList* sl) {
	sl -> _head = NULL;
}
//创造结点数据
Node* creatNode(type date) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->_date = date;
	node->_next = NULL;
	return node;
}
//尾插
void SingleListPushBack(SingleList* sl, type date) {

}
//头插
void SingleListPushFront(SingleList* sl, type date) {

}
//尾删
void SingleListPopBack(SingleList* sl) {

}
//头删
void SingleListPopFront(SingleList* sl) {

}
//任意位置后面插入
void SingleListInsertAfter(Node* pos, type date) {

}
//任意位置后面删除
void SingleListEraseAfter(Node* pos) {

}
//查找数据
Node* find(type date) {

}
//输出
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