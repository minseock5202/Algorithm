#include <iostream>

using namespace std;

int number = 15;

// �ϳ��� ��� ������ �����Ѵ�.
typedef struct node *treePointer;
typedef struct node {
	int data;
	treePointer leftChild, rightChild;
} node;

// ���� ��ȸ
void pre_order(treePointer ptr) {
	if (ptr) {
		cout << ptr->data << ' ';
		pre_order(ptr->leftChild);
		pre_order(ptr->rightChild);	
	}
}

// ���� ��ȸ
void in_order(treePointer ptr) {
	if (ptr) {
		in_order(ptr->leftChild);
		cout << ptr->data << ' ';
		in_order(ptr->rightChild);
	}
}

// ���� ��ȸ
void post_order(treePointer ptr) {
	if (ptr) {
		post_order(ptr->leftChild);
		post_order(ptr->rightChild);
		cout << ptr->data << ' ';	
	}
}

int main(void) {
	
	node nodes[number+1];
	for (int i = 1; i <= number; i++) {
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;	
	}
	
	for (int  i = 1; i <= number; i++) {
		if (i % 2 == 0)
			nodes[i / 2].leftChild = &nodes[i];
		else
			nodes[i / 2].rightChild = &nodes[i];	
	}
	printf("���� ��ȸ: "); 
	pre_order(&nodes[1]);
	printf("\n");
	printf("���� ��ȸ: ");
	in_order(&nodes[1]);
	printf("\n");
	printf("���� ��ȸ: ");
	post_order(&nodes[1]);
	printf("\n");
	
	return 0;	
}
