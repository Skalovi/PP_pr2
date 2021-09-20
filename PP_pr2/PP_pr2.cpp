#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	std::cout << "Введите n(от 1 до 9999) :";
	std::cin >> n;
	
	while (n < 1 || n > 9999)
	{
		std::cout << "Неверный n попробуйте еще раз:";
		std::cin >> n;
	}

	std::string Num;

	if (n / 1000 == 9)
		Num.append("Девять Тысяч ");
	if (n / 1000 == 8)
		Num.append("Восемь Тысяч ");
	if (n / 1000 == 7)
		Num.append("Семь Тысяч ");
	if (n / 1000 == 6)
		Num.append("Шесть Тысяч ");
	if (n / 1000 == 5)
		Num.append("Пять Тысяч ");
	if (n / 1000 == 4)
		Num.append("Четыре Тысячи ");
	if (n / 1000 == 3)
		Num.append("Три Тысячи ");
	if (n / 1000 == 2)
		Num.append("Две Тысячи ");
	if (n / 1000 == 1)
		Num.append("Одна Тысяча ");

	n = n % 1000;
	
	if (n / 100 == 9)
		Num.append("Девятьсот ");
	if (n / 100 == 8)
		Num.append("Восемьсот ");
	if (n / 100 == 7)
		Num.append("Семьсот ");
	if (n / 100 == 6)
		Num.append("Шестьсот ");
	if (n / 100 == 5)
		Num.append("Пятьсот ");
	if (n / 100 == 4)
		Num.append("Четыреста ");
	if (n / 100 == 3)
		Num.append("Триста ");
	if (n / 100 == 2)
		Num.append("Двести ");
	if (n / 100 == 1)
		Num.append("Сто ");

	n = n % 100;

	if (n / 10 == 9)
		Num.append("Девяносто ");
	if (n / 10 == 8)
		Num.append("Восемьдесят ");
	if (n / 10 == 7)
		Num.append("Семьдесят ");
	if (n / 10 == 6)
		Num.append("Шестьдесят ");
	if (n / 10 == 5)
		Num.append("Пятьдесят ");
	if (n / 10 == 4)
		Num.append("Сорок ");
	if (n / 10 == 3)
		Num.append("Тридцать ");
	if (n / 10 == 2)
		Num.append("Двадцать ");

	if (n / 10 == 1)
	{
		if (n % 10 == 9)
			Num.append("Девятнадцать рублей");
		if (n % 10 == 8)
			Num.append("Восемнадцать рублей");
		if (n % 10 == 7)
			Num.append("Семнадцать рублей");
		if (n % 10 == 6)
			Num.append("Шестнадцать рублей");
		if (n % 10 == 5)
			Num.append("Пятнадцать рублей");
		if (n % 10 == 4)
			Num.append("Четырнадцать рублей");
		if (n % 10 == 3)
			Num.append("Тринадцать рублей");
		if (n % 10 == 2)
			Num.append("Двенадцать рублей");
		if (n % 10 == 1)
			Num.append("Одиннадцать рублей");
		if (n % 10 == 0)
			Num.append("Десять рублей");

	}

	if (n % 10 == 0)
		Num.append("рублей");
	if (n % 10 == 1)
		Num.append("Один рубль");
	if (n % 10 == 2)
		Num.append("Два рубля");
	if (n % 10 == 3)
		Num.append("Три рубля");
	if (n % 10 == 4)
		Num.append("Четыре рубля");
	if (n % 10 == 5)
		Num.append("Пять рублей");
	if (n % 10 == 6)
		Num.append("Шесть рублей");
	if (n % 10 == 7)
		Num.append("Семь рублей");
	if (n % 10 == 8)
		Num.append("Восемь рублей");
	if (n % 10 == 9)
		Num.append("Девять рублей");

	std::cout << Num;
}
