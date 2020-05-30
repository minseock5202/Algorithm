//선택정렬(Select Sort)
// 다음 숫자들을 오름차순으로 정렬하시오
// 1 10 5 8 7 6 4 3 2 9 
// 가장 작은 것을 선택해서 앞으로 보내면 어떨까? 
// 1 10 5 8 6 7 4 3 2 9
// 1 2 5 8 6 7 4 3 10 9
// 1 2 3 8 6 7 4 5 10 9 
// ...
// 시간복잡도 : 10+9+8+...+1 => 등차수열
// 10*(10+1)/2=55
// N*(N+1)/2
// O(N^2)
// 비효율적인 알고리즘 
#include <stdio.h>

int main(void){
	int i,j,min,index,temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	for(i=0;i<10;i++){
		min = 9999;
		for(j=i;j<10;j++){
			if(min>array[j]){
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	return 0;
} 
