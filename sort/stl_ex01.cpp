#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

	int a[10] = {9,3,5,4,1,10,8,6,7,2};
	
	sort(a, a + 10); // sort(矫累林家,  场林家); 
	
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	

	return 0;	
}

