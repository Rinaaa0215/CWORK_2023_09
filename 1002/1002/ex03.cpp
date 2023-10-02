#include<iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	cout << "정수를 입력하세요(0은 종료입니다) ";

	while (true) {//범위를 모를 때
		cin >> n;//n입력받기
		if (n == 0)break;//종료
		sum += n;//(0+1+....)

	}
	cout << "총 합은" << sum << "입니다." << endl;
	return 0;
}