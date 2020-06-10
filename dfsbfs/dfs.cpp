#include <iostream>
#include <vector>

using namespace std;

int number = 7;
int check[7];
vector<int> a[8];

void dfs(int x) {
	if (check[x]) return;
	check[x] = true;
	cout << x << ' ';
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		dfs(y);	
	}
}

int main(void) {
	
	// 1과 2을 연결합니다.
	a[1].push_back(2);
	a[2].push_back(1);
	// 1과 3을 연결합니다.
	a[1].push_back(3);
	a[3].push_back(1);
	// 2과 3을 연결합니다.
	a[2].push_back(3);
	a[3].push_back(2);
	// 2과 4을 연결합니다.
	a[2].push_back(4);
	a[4].push_back(2);
	// 2과 5를 연결합니다.
	a[2].push_back(5);
	a[5].push_back(2);
	 // 3과 6을 연결합니다.
	a[3].push_back(6);
	a[6].push_back(3);
	// 3과 7을 연결합니다.
	a[3].push_back(7);
	a[7].push_back(3);
	// 4와 5를 연결합니다.
	a[4].push_back(5);
	a[5].push_back(4);
	// 6과 7을 연결합니다.
	a[6].push_back(7);
	a[7].push_back(6);
	// dfs 수행
	dfs(1); 
	
	return 0;	
}
