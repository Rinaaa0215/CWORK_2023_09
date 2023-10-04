#include<iostream>


//정적 할당은 컴파일 시점에 메모리가 할당되는 것을 의미함. 
// 프로그램이 실행되기 전에 변수의 크기와 위치가 이미 결정되어 있음.
int main() {
	int n;

	std::cout << "Enter the number of elements: ";
	std::cin >> n;

	//동적으로 배열 할당
	int* arr = new int[n];//new를 사용하면 프로그램 실행 중에만 알 수 있음.
	for (int i = 0; i < n; i++) {
		arr[i] = i;
		std::cout << arr[i] << "";
	}

	//해당된 메모리 해제
	delete[] arr;
	return 0;

}