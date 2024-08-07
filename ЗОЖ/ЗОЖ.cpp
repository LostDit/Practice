//8.2 Тип данных float раздел
//Задача 2. ЗОЖ
#include <iostream>

int main(){
	setlocale(LC_ALL, "Russian");
	float protein, carbohydrates,mass;

	std::cout << "Введите массу продукта: ";
	std::cin >> mass;
	std::cout << "\n";
	std::cout << "Введите сколько в продукте белков на 100 грамм: ";
	std::cin >> protein;
	std::cout << "\n";
	std::cout << "Введите сколько в продукте углеводов на 100 грамм: ";
	std::cin >> carbohydrates;
	std::cout << "\n";
	
	protein *= (mass / 100);
	carbohydrates *= (mass / 100);

	std::cout << "На " << mass << " грамм продукта приходится: \n" << " Белков - " << protein << " грамм." << "\n" << " Углеводов - " << carbohydrates << " грамм.";
}
