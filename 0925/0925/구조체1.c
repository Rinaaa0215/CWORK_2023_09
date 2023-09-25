#include <stdio.h>
#include <string.h>
//typedef int length -> int = length
//typedef char* string -> char* = string


//int, double, char, float -> 기본타입
//구조체(struct) -> customize

struct Student {
	int id;
	char name[100];
	char major[100];

};
int main() {

	struct Student kim = {23,"kim rin a","computer science"};// 방법 3. 선언 및 초기화
	kim.id = 100;

    /* 방법 1.
	kim.name[0] = 'k';//배열이라서 하나씩 입력해줘야 함.
	kim.name[1] = 'i';
	kim.name[2] = 'm';
	kim.name[3] = '\0';
	
	kim.major[0] = 'c';
	kim.major[1] = 'o';
	kim.major[2] = 'm';
	kim.major[3] = '\0';
	*/

	/* 방법 2.
	strcpy_s(kim.name, sizeof(kim.name), "kim mega");   //strcpy_s(변수,sizeof(변수),"입력값")
	strcpy_s(kim.major, sizeof(kim.major), "computer science");
	*/


	printf("%s의 전공은 %s이고 id는 %d 입니다.\n", kim.name, kim.major, kim.id);
	return 0;

}


