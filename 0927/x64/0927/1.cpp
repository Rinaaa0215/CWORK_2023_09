//�Լ��� Ư�� �۾��� �����ϴ� �ڵ��� ����. Ư�� ���� �Է¹޾� �ٸ� ������ ��ȯ�� �� �ִ�.
//�Լ��� ����ϱ� ���ؼ��� �� �Լ��� ȣ���ؾ� ��. ��ȣ�� ����Ͽ� ȣ��.
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


