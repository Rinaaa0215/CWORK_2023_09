#include<iostream>

using namespace std;
int main(){
	int sum = 0;
	int n;

	cout << "������ �Է��ϼ���(0�� �����Դϴ�)";
	//for�� ���� �� ���, while�� ���� �𸣴� ���

	while (true) {
		cin >> n;

		if (n == 0)break;
		sum += n;

	}
	cout << "�� ����" << sum << "�Դϴ�." << endl;

	return 0;
}