#include<iostream>

void quickSort(int* data, int start, int end) {
	if (start >= end) {
		return;
	}
	
	int pivot = start;
	int i = start + 1;
	int j = end;
	
	while(i <= j) {
		while(i <= end && data[i] <= data[pivot]) {
			i++;	
		}
		
		while(j > start && data[j] >= data[pivot]) {
			j--;	
		}
		
		if (i > j) {
			int temp = data[j];
			data[j] = data[pivot];
			data[pivot] = temp;
		} else {
			int temp = data[i];
			data[i] = data[j];
			data[j] = temp;	
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", data[i]);	
	}
	printf("\n");
	
	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
	
}

int main(void) {
	
	int number = 10;
	int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9}; 
	quickSort(data, 0, number - 1);
	for (int i = 0; i < 10; i++) {
		printf("%d ", data[i]);	
	}
	
	return 0;	
}
