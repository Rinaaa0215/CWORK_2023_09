#include <stdio.h>

typedef struct MovieScreening {
	char movieTitle[50];
	char screeningTime[10];
	int seats[100];
}; MovieScreening;

void showSeats(MovieScreening *screening) {
	for (int i = 0; i < 100; i++) {
		if (screening->seats[i] == 1) {
			printf("%d�� �¼��� ����ƽ��ϴ�.\n", i);
		}
		else {
			printf("%d�� �¼��� ���డ���մϴ�.\n", i);
		}
	}
}

void reserveSeats(MovieScreening* screening, int seat){
	if (screening->seats[seat] == 1) {
		printf("%d�� �¼��� ������ �Ұ��� �մϴ�.\n", seat);

	}
	else {
		screening->seats[seat] = 1;
		printf("%d�� �¼��� ���� �Ǿ����ϴ�.\n", seat);
	}


}
int main() {
	MovieScreening m1 = { "Interstellar","15:00",{0} };//��� �¼� 0���� �ʱ�ȭ
	showSeats(&m1);
	reserveSeats(&m1,32);
	reserveSeats(&m1,77);
	reserveSeats(&m1,14);
	reserveSeats(&m1,77);
	showSeats(&m1);
	

	return 0;
}