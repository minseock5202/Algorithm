// 기초 정렬 문제 풀어보기
// 백준 2750번 
// 선택정렬 
#include <stdio.h>

int array[1001];

int main(void){
	int number,i,j,min,index,temp;
	scanf("%d", &number);
	for(i=0;i<number;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<number;i++){
		min = 1001;
		for(j=i;j<number;j++){
			if(min>array[j]){
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i=0;i<number;i++){
		printf("%d\n",array[i]);
	}
	
	// 세개의 숫자 정렬 문제 
	 
	//int i,j,min,index,temp;
	for(i=0;i<3;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<3;i++){
		min = 1000001;
		for(j=i;j<3;j++){
			if(min>array[j]){
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i=0;i<3;i++){
		printf("%d ",array[i]);
	}	
} 



