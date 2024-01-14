#include <iostream>
#include <string>
#include "Tree.hpp"

void print_tree(const Tree& T) {
	std::cout << "Название плода: " << T.fruit << std::endl;
	std::cout << "Кол-во плодов на дереве: " << T.fruits_number << std::endl;
	std::cout << "Цена за один плод: " << T.fruits << std::endl;
}

int full_price(const Tree& T) {
	return T.fruits * T.fruits_number;
}
int collect(const Tree& T, int num) {
	if (num > T.fruits_number || num <= 0)
		return 1;
	return T.fruits * num;   // как я понял продаем именно сорванные плоды, то кол-во, на которое уменьшилось 
}


