#include<iostream>

using namespace std;
int main(){
	int sum = 0;
	int n;

	cout << "정수를 입력하세요(0은 종료입니다)";
	//for는 끝을 알 경우, while은 끝을 모르는 경우

	while (true) {
		cin >> n;

		if (n == 0)break;
		sum += n;

	}
	cout << "총 합은" << sum << "입니다." << endl;

	return 0;
}