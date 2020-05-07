#include <iostream>

using namespace std;

int main(void) {
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	int index;
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);	
	}
	printf("\n");
	
	for (int i = 0; i < 10; i++) {
		int min = 9999;
		
		for (int j = i; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}
	
		int temp = array[i];
		array[i] = array[index];
		array[index] = temp;
		printf("%d. ", i);
		for (int j = 0; j < 9; j++) {
			printf("%d, ", array[j]);	
		}
		printf("%d\n", array[9]);
	}
	
	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
	
	return 0;	
}
