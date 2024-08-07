//8.2 Тип данных float раздел
//Задача 3. Постоянный покупатель
#include <iostream>

int main()  {
    setlocale(LC_ALL, "Russian");
	setlocale(LC_ALL, "Russian");

	float grams, price,discont;

	std::cout << "Введите цену продукта за 100 грамм: ";
	std::cin >> price;
	std::cout << "\n";
	std::cout << "Введите сколько хочет взять покупатель: ";
	std::cin >> grams;
	std::cout << "\n";
	std::cout << "Введите скидку постоянного покупателя: ";
	std::cin >> discont;
	discont /= 100;
	price *= (grams / 100);
	discont *= price;
	price -= discont;
	std::cout << "\n";
	std::cout << "Цена продукта: " << price << " за " << grams << " грамм продукта." << "С учётом скидки.";
}