#include<iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	cout << "������ �Է��ϼ���(0�� �����Դϴ�) ";

	while (true) {//������ �� ��
		cin >> n;//n�Է¹ޱ�
		if (n == 0)break;//����
		sum += n;//(0+1+....)

	}
	cout << "�� ����" << sum << "�Դϴ�." << endl;
	return 0;
}