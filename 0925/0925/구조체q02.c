#include <stdio.h>

typedef struct ingred {
	int shots;
	int milk;
	int syrup;
}ingred;


typedef struct ediya {
	Custom Custom;
	char name;
	int price;
	char size[100];
	int calorie;
	ingred ingred;
}ediya;

typedef struct Custom {
	char nickname[50];
	//list
	char list[100][50];
	int times;
	int payment;

}Custom;

void buyCoffee(Custom *customer, ediya *coffee) {
	customer->times++;
	customer->payment = customer->times + coffee->price;

}

int main() {
	ediya americao = {
		.name = "americano",
		.price = 3000,
		.size = 'L',
		.calorie = 10,
		.ingred = {2,0,1},
	};
	ediya latte = {
		.name = "latte",
		.price = 4000,
		.size = 'L',
		.calorie = 150,
		.ingred = {2,100,0},
	};
	Custom rina = {
		.nickname = "rina",
		.times = 0,
		.payment = 0,
	};


	
	buyCoffee(&rina, latte);
	buyCoffee(&rina, latte);
	buyCoffee(&rina, latte);
	buyCoffee(&rina, latte);
	buyCoffee(&rina, latte);

	printf("rina�� %d���� latte�� �����ϰ�, %d�� ������ �Ͽ���.", rina.times, rina.payment);
}

