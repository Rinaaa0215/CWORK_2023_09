#include <stdio.h>

int itemCnt = 0;
int money = 100;


void buyitem(int cost, int cnt) {

	itemCnt += cnt;
	money -= cost;
	printf("�������� �����߽��ϴ�.\n");
	printf("������ ����: %d\n", itemCnt);
	printf("�ܾ�:%d\n", money);
}
int main() {
	buyitem(30,5);

	buyitem(50,7);

}