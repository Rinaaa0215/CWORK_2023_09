#include<iostream>
#include<string>
using namespace std;

class TVclass {
public:

	int power0n;
	int channel;
	int volume;

public:
	void power() {
		if (power0n == 0) {
			cout << "���� ��" << endl;
		}
		else if (power0n == 1) {
			cout << "���� ����" << endl;
		}
	}

	void ch() {
		cout << "ä�� �Է�: " << endl;
		cin >> channel;
	}
	void volume() {
		cout << "����: " << endl;
		cin >> volume;

		if (volume = '1') {
			cout << "���� Ű��" << endl;
		}
		else if (volume == '0') {
			cout << "�ҷ� ����" << endl;
		}
	}

};
int main() {
	TVclass ch1;

}