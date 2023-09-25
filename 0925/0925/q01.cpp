#include <math.h>
#include <stdio.h>


void secondSolve(double a, double b, double c) {
	double root = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;//sqrt는 루트값 구함
	double root1= (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
	printf("%.2lf %.2lf", root, root1);



}

int main() {
	//ax^2-bx-c의 x의 값은? 근의 공식 사용
	double a = 1, b = -4, c = 4;

	secondSolve(a,b,c);







	return 0;

}