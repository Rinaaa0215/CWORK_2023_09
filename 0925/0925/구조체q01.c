#include<stdio.h>


struct ingred {
	int shots;
	int milk;
	int syrup;
};


struct Starbucks {
	char name[100];
	int price;
	char size[100];
	int calorie;
	struct ingred a;
};

int main() {
	struct Starbucks coffee = { "iced latte",5500,"tall",120,{2,150,0} }; //struct starbuck=int, 변수명=coffee

	printf("주문한 커피는 %s\n", coffee.name);
	printf("가격은 %d\\ \n", coffee.price);
	printf("사이즈는 %s size\n", coffee.size);
	printf("칼로리는 %d kcal\n", coffee.calorie);
	printf("재료는 원두 %d샷 우유 %dml 시럽 %d번\n",coffee.a.shots,coffee.a.milk,coffee.a.syrup);
}
//커피 이름
//가격
//사이즈 t g v
//칼로리
//재료 {우유, 물, 시럽}