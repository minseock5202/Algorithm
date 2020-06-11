#include <iostream>

//�θ� ��带 ã�� �Լ�
int getParent(int parent[], int x) {
	if (parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

// �� �θ� ��带 ��ģ��.
void unionParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}

// ���� �θ� ��带 �������� Ȯ���մϴ�.
int findParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a == b) return 1;
	else return 0;
}

int main(void) {
	int parent[11];
	for (int i = 0; i <= 10; i++) {
		parent[i] = i;	
	}
	
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	
	for (int i = 0; i <= 10; i++) {
		printf("[%d, %d] ", i, parent[i]); 	
	}
	printf("\n");
	
	printf("3�� 6�� ���� �׷����� ���ϴ°�? %d\n", findParent(parent, 3, 6));
	
	return 0;	
}
