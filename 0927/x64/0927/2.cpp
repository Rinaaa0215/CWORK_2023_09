//구조체

#include<stdio.h>
int seat = 100;
struct MovieScreening {
	char name[50];
	char time[100];
	int avail;

};
 int RSeat(int num, int seat) {
	

	}
}

int main() {

	printf("좌석번호: ");
	scanf("%d", &num);

	struct MovieScreening Interstellar = { "Interstellar","15:00",0};



	printf("영화이름: %s \n", Interstellar.name);
	printf("상영시간: %s \n", Interstellar.time);
	printf("예약 상태: %d \n", Interstellar.avail);


}