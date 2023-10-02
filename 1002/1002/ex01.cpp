#include<iostream>
using namespace std;

int main() {
	int n;
	int result;
	
	std::cout << "양의 정수 입력: ";
	cin >> n;

	if (n <= 0) {
		cout << "양의 정수가 아닙니다." << endl;
		return 1;//중단

	}
	cout<<n<<"의 약수는 ";

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