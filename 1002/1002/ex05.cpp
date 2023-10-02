#include<iostream>
namespace MyNamespace {
	void display() {
		printf("Inside MyNamespace\n");
	}
}
using namespace MyNamespace;
int main() {
	display();
}