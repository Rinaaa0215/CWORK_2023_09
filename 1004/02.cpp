#include<iostream>


//���� �Ҵ��� ������ ������ �޸𸮰� �Ҵ�Ǵ� ���� �ǹ���. 
// ���α׷��� ����Ǳ� ���� ������ ũ��� ��ġ�� �̹� �����Ǿ� ����.
int main() {
	int n;

	std::cout << "Enter the number of elements: ";
	std::cin >> n;

	//�������� �迭 �Ҵ�
	int* arr = new int[n];//new�� ����ϸ� ���α׷� ���� �߿��� �� �� ����.
	for (int i = 0; i < n; i++) {
		arr[i] = i;
		std::cout << arr[i] << "";
	}

	//�ش�� �޸� ����
	delete[] arr;
	return 0;

}