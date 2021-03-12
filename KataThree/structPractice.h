#pragma once
typedef struct myPizza {
	char* name;
	int numOfOrders;
	char* toppingOne;
	char* toppingTwo;
	struct myPizza* next;
}myPizza;




void createList(myPizza** head);

void addToEnd(myPizza** head, myPizza* endNode);

void print(myPizza* head);