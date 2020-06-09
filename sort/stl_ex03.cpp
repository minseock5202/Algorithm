#include <iostream>
#include <algorithm>

using namespace std;

class Student{ // 여러개의 변수를 묶기 위한 방법 새로운 자료형을 만든다. 
public:
	string name;
	int score;
	Student(string name, int score) { // 초기화 
		this->name = name;
		this->score = score;
	}
	// 정렬 기준은 '점수가 작은 순서로 정렬'
	bool operator <(Student &student) {
		return this->score < student.score;
	}
};

int main(void) {
	
	Student students[] = {
		Student("나동빈", 90),
		Student("이상욱", 93),
		Student("박한울", 97),
		Student("강종구", 87),
		Student("이태일", 92)
	};
	
	sort(students, students + 5);
	
	for (int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}
	
	return 0;	
}
