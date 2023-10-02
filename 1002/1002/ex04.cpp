#include<iostream>
using namespace std;

namespace MyNamespace {
	int value = 10;
	void display() {
		printf("Inside MyNamespace\n");
	}
}
int main() {
	printf("%d", MyNamespace::value);
	MyNamespace::display();//네임스페이스의 내부 요소 호출시 사용
	return 0;

}









