#include <stdio.h>
#include <string.h>
//typedef int length -> int = length
//typedef char* string -> char* = string


//int, double, char, float -> �⺻Ÿ��
//����ü(struct) -> customize

struct Student {
	int id;
	char name[100];
	char major[100];

};
int main() {

	struct Student kim = {23,"kim rin a","computer science"};// ��� 3. ���� �� �ʱ�ȭ
	kim.id = 100;

    /* ��� 1.
	kim.name[0] = 'k';//�迭�̶� �ϳ��� �Է������ ��.
	kim.name[1] = 'i';
	kim.name[2] = 'm';
	kim.name[3] = '\0';
	
	kim.major[0] = 'c';
	kim.major[1] = 'o';
	kim.major[2] = 'm';
	kim.major[3] = '\0';
	*/

	/* ��� 2.
	strcpy_s(kim.name, sizeof(kim.name), "kim mega");   //strcpy_s(����,sizeof(����),"�Է°�")
	strcpy_s(kim.major, sizeof(kim.major), "computer science");
	*/


	printf("%s�� ������ %s�̰� id�� %d �Դϴ�.\n", kim.name, kim.major, kim.id);
	return 0;

}


