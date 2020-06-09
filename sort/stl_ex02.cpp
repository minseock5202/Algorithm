#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b; // a가 b보다 작을 때 작은 값이 앞으로 간다.	
}

int main(void) {

	int a[10] = {9,3,5,4,1,10,8,6,7,2};
	
	sort(a, a + 10, compare); // sort(시작주소,  끝주소); 
	
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	
	return 0;
}
