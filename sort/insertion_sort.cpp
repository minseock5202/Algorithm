#include<iostream>

using namespace std;

int main(void) {
	
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for (int i = 0; i < 9; i++) {
		int j = i;
		while(j >= 0 && array[j] > array[j + 1]) {
			printf("%d, %d\n", array[j], array[j+1]);
			int temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			j--;
		}
		printf("%d. ", i);
		for (int j = 0; j < 10; j++) {
			printf("%d ", array[j]);	
		}
		printf("\n");
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);	
	}
	
	return 0;	
}
