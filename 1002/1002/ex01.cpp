#include<iostream>
using namespace std;

int main() {
	int n;
	int result;
	
	std::cout << "���� ���� �Է�: ";
	cin >> n;

	if (n <= 0) {
		cout << "���� ������ �ƴմϴ�." << endl;
		return 1;//�ߴ�

	}
	cout<<n<<"�� ����� ";

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}

/*for(int i=1;i<=n;i++);
* if(n/i==0){
* n=result
*/