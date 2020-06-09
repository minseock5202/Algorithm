#include<iostream>

int number = 8;
int sorted[8]; //  정렬배열은 반드시 전역변수로 해야한다.
// 필요할 때마다 만들어 쓰는 것보단 정렬배열은 전역변수로 하는 것이 더 효율적이다.

void merge(int *array, int start, int middle, int end) {
	int i = start;
	int j = middle + 1;
	int k = start;
	
	while(i <= middle && j <= end) {
		if (array[i] <= array[j]) {
			sorted[k] = array[i];
			i++;
		} else {
			sorted[k] = array[j];
			j++;	
		}
		k++;
 	}
 	// 남은 데이터 삽입
	 if (i > middle) {
	 	for (int t = j; t <= end; t++) {
	 		sorted[k] = array[t];
	 		k++;
	 	}
	} else {
		for (int t = i; t <= middle; t++) {
			sorted[k] = array[t];
			k++;
		}
	}
	
	for (int t = start; t <= end; t++) {
		array[t] = sorted[t];	
	}
}

void mergeSort(int *array, int start, int end) {
	// 크기가 1보다 큰 경우	
	if (start < end) {
		int middle = (start + end) / 2;
		mergeSort(array, start, middle);
		mergeSort(array, middle + 1, end);
		merge(array, start, middle, end);
	}
}
 
int main(void) {
	
	int array[number] = {7,6,5,8,3,5,9,1};
	mergeSort(array, 0, number - 1);
	for (int i = 0; i < number; i++) {
		printf("%d ", array[i]);	
	}

	return 0;
}
