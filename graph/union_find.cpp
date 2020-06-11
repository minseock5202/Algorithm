#include <iostream>

//부모 노드를 찾는 함수
int getParent(int parent[], int x) {
	if (parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

// 각 부모 노드를 합친다.
void unionParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}

// 같은 부모 노드를 가지는지 확인합니다.
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
	
	printf("3과 6은 같은 그래프에 속하는가? %d\n", findParent(parent, 3, 6));
	
	return 0;	
}
