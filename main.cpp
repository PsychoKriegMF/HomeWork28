#include <iostream>
#include "Tree.hpp"





int main() {
	setlocale(LC_ALL, "ru");

	Tree kiwi{
		"Киви",
		10,
		5
	};

	print_tree(kiwi);
	std::cout << std::endl;

	std::cout << "Стоимость всех плодов на дереве = " << full_price(kiwi) << std::endl;

	int n;
	std::cout << "Введите кол-во сорваных фруктов -> ";
	std::cin >> n;
	if (collect(kiwi,n) == 1)
		std::cout << "Ошибка ввода!" << std::endl;
	else
		std::cout << "Сорванные плоды можно продать за " << collect(kiwi,n) << std::endl;



	return 0;
}