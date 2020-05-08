//삽입정렬(Insertion Sort)
// 다음 숫자들을 오름차순으로 정렬하는 프로그램을 작성하세요.
// 1 10 5 8 7 6 4 3 2 9
// 각 숫자를 적절한 위치에 삽입하면 어떨까?
// 필요할 때만
// 1 10 5 8 7 6 4 3 2 9
// 1 10 5 8 7 6 4 3 2 9
// 1 5 10 8 7 6 4 3 2 9
// 1 5 8 10 7 6 4 3 2 9
// 1 5 7 8 10 6 4 3 2 9
// ...
// 최악의 경우 : O(N^2)
// 앞의 정렬방법들 보다 훨씬 효율적
// 거의 정렬이 되어있다면 굉장히 빠름
 
#include <stdio.h>
int main(void){
	int i,j,temp;
	int array[10] = {1,10,5,8,7,6,4,3,2,9};
	for(i=0;i<9;i++){
		j = i;
		while(array[j] > array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	}
	for(i=0;i<10;i++){
		printf("%d ",array[i]);
	}
	return 0;
} 
