#include <stdio.h>

typedef struct MovieScreening {
	char movieTitle[50];
	char screeningTime[10];
	int seats[100];
}; MovieScreening;

void showSeats(MovieScreening *screening) {
	for (int i = 0; i < 100; i++) {
		if (screening->seats[i] == 1) {
			printf("%d의 좌석은 예약됐습니다.\n", i);
		}
		else {
			printf("%d의 좌석은 예약가능합니다.\n", i);
		}
	}
}

void reserveSeats(MovieScreening* screening, int seat){
	if (screening->seats[seat] == 1) {
		printf("%d의 좌석은 예약이 불가능 합니다.\n", seat);

	}
	else {
		screening->seats[seat] = 1;
		printf("%d의 좌석이 예약 되었습니다.\n", seat);
	}


}
int main() {
	MovieScreening m1 = { "Interstellar","15:00",{0} };//모든 좌석 0으로 초기화
	showSeats(&m1);
	reserveSeats(&m1,32);
	reserveSeats(&m1,77);
	reserveSeats(&m1,14);
	reserveSeats(&m1,77);
	showSeats(&m1);
	

	return 0;
}