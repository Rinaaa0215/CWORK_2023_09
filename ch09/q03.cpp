#include <stdio.h>

int main() {
	int n;
	printf("���� �Է�: ");
	scanf("%d", &n);

	if (n >= 0) {
		if (n < 41) {
			printf("moderate\n");
		}
		if (n > 40) {
			printf("hot\n");
		}
	}
	else {
		printf("cold\n");
	}
}