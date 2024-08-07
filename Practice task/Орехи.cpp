//Задача 1. Орехи
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	float grams,price;
	
	std::cout << "Введите цену продукта за 100 грамм: ";
	std::cin >> price;
	std::cout << "\n";
	std::cout << "Введите сколько хочет взять покупатель: ";
	std::cin >> grams;

	price *= (grams / 100);

	std::cout << "Цена продукта: " << price << " за " << grams << " грамм продукта." << "\n";
}