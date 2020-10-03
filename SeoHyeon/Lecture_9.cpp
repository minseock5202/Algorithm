// C++STLsort()함수다루기 
// 이미 정렬관련 라이브러리가 존재

 
# include<stdio.h>
# include<iostream>
# include<algorithm>

using namespace std;

class Student{
	public:
		string name;
		int score;
		Student(string name, int score){
			this -> name = name;
			this -> score = score;
		}
		//정렬기준은 '점수가 작은 순서'
		bool operator < (Student & student){
			return this->score < student.score;
		} 
};

int main(void){
	Student students[] = {
		Student("나동빈", 90),
		Student("이상욱",93),
		Student("박한울",97),
		Student("강종구",87),
		Student("이태일",92)	
	};
	sort(students,students+5);
	for(int i=0;i<5;i++){
		cout << students[i].name << ' ';
	}
};
//bool compare(int a, int b){
//	return a>b;
//}

//int main(void){
//	int a[10] = {9,3,5,4,1,10,8,6,7,2};
//	sort(a,a+10,compare);
//	for(int i=0;i<10;i++){
//		cout << a[i] << ' ';
//	}
//} 




