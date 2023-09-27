//함수는 특정 작업을 수행하는 코드의 집합. 특정 값을 입력받아 다른 값으로 반환할 수 있다.
//함수를 사용하기 위해서는 그 함수를 호출해야 함. 괄호를 사용하여 호출.
#include <stdio.h>

int swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

	int main() {
		int m = 10;
		int n = 20;


		swap(&m, &n);
		printf("m: %d, n: %d", m, n);

		return 0;
	}


