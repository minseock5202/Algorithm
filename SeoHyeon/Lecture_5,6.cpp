//퀵 정렬(Quick Sort)
// 시간복잡도 : O(N*logN)
// 분할 정복 알고리즘
// 다음의 숫자들을 오름차순으로 정렬하는 프로그램을 작성하세요
// 1 10 5 8 7 6 4 3 2 9
// 특정한 값을 기준으로 큰 숫자와 작은 숫자를 나누면 어떨까?
// pivot : 기준 값
// 3 7 8 1 5 9 6 10 2 4 (pivot : 3)
// 왼쪽 부터 3보다 큰 값, 오른쪽 부터 3보다 작은 값 찾기
// 3 2 8 1 5 9 6 10 7 4 (pivot : 3) 
// 3 2 1 8 5 9 6 10 7 4 (pivot : 3)
// 작은 값의 인덱스가 큰 값의 인덱스 보다 작다
// 1 2 3 8 5 9 6 10 7 4 (pivot : 1,8)
// 1 2 3 8 5 9 6 10 7 4 (pivot : 2,8)
// 1 2 3 8 5 9 6 10 7 4 (pivot : 8)
// 1 2 3 8 5 4 6 10 7 9 (pivot : 8)
// 1 2 3 8 5 4 6 7 10 9 (pivot : 8)
// 1 2 3 7 5 4 6 8 10 9 (pivot : 7,10)
// ...
// 1 2 3 4 5 => 5*5 = 25
// 6 7 8 9 10 => 5*5 = 25
// 총 50번 연산 
// 최악의 경우 O(N^2) 이다 => 이미 정렬이 되어있는 경우 
#include <stdio.h>

int number = 10;
int data[10] = {1,10,5,8,7,6,4,3,2,9};
void quickSort(int *data, int start, int end){
	if (start >= end){//원소가 한개인 경우
		return; 
	}
	int key = start;//키는 첫번째 원소
	int i = start+1;
	int j = end;
	int temp;
	while(i<=j){//엇갈릴 때까지 반복
		while(data[i] <= data[key]){//키 값보다 큰 값을 만날 때 까지 
			//내림차순 정렬을 위해서는 data[i] >= data[key] 
			i++;
		} 
		while(data[j] >= data[key] && j > start){//키 값보다 작은 값을 만날 때 까지
			//내림차순 정렬을 위해서는 data[j] <= data[key] && j > start 
			j--;
		}
		if(i > j){//현재 엇갈린 상태면 키 값과 교체
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;	
		} else{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		} 
	}
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);
	 
}
int main(void){
	quickSort(data,0,number-1);
	for(int i=0;i<number;i++){
		printf("%d ", data[i]);	
	}
}  
