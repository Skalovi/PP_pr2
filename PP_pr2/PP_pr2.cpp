#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	std::cout << "������� n(�� 1 �� 9999) :";
	std::cin >> n;
	
	while (n < 1 || n > 9999)
	{
		std::cout << "�������� n ���������� ��� ���:";
		std::cin >> n;
	}

	std::string Num;

	if (n / 1000 == 9)
		Num.append("������ ����� ");
	if (n / 1000 == 8)
		Num.append("������ ����� ");
	if (n / 1000 == 7)
		Num.append("���� ����� ");
	if (n / 1000 == 6)
		Num.append("����� ����� ");
	if (n / 1000 == 5)
		Num.append("���� ����� ");
	if (n / 1000 == 4)
		Num.append("������ ������ ");
	if (n / 1000 == 3)
		Num.append("��� ������ ");
	if (n / 1000 == 2)
		Num.append("��� ������ ");
	if (n / 1000 == 1)
		Num.append("���� ������ ");

	n = n % 1000;
	
	if (n / 100 == 9)
		Num.append("��������� ");
	if (n / 100 == 8)
		Num.append("��������� ");
	if (n / 100 == 7)
		Num.append("������� ");
	if (n / 100 == 6)
		Num.append("�������� ");
	if (n / 100 == 5)
		Num.append("������� ");
	if (n / 100 == 4)
		Num.append("��������� ");
	if (n / 100 == 3)
		Num.append("������ ");
	if (n / 100 == 2)
		Num.append("������ ");
	if (n / 100 == 1)
		Num.append("��� ");

	n = n % 100;

	if (n / 10 == 9)
		Num.append("��������� ");
	if (n / 10 == 8)
		Num.append("����������� ");
	if (n / 10 == 7)
		Num.append("��������� ");
	if (n / 10 == 6)
		Num.append("���������� ");
	if (n / 10 == 5)
		Num.append("��������� ");
	if (n / 10 == 4)
		Num.append("����� ");
	if (n / 10 == 3)
		Num.append("�������� ");
	if (n / 10 == 2)
		Num.append("�������� ");

	if (n / 10 == 1)
	{
		if (n % 10 == 9)
			Num.append("������������ ������");
		if (n % 10 == 8)
			Num.append("������������ ������");
		if (n % 10 == 7)
			Num.append("���������� ������");
		if (n % 10 == 6)
			Num.append("����������� ������");
		if (n % 10 == 5)
			Num.append("���������� ������");
		if (n % 10 == 4)
			Num.append("������������ ������");
		if (n % 10 == 3)
			Num.append("���������� ������");
		if (n % 10 == 2)
			Num.append("���������� ������");
		if (n % 10 == 1)
			Num.append("����������� ������");
		if (n % 10 == 0)
			Num.append("������ ������");

	}

	if (n % 10 == 0)
		Num.append("������");
	if (n % 10 == 1)
		Num.append("���� �����");
	if (n % 10 == 2)
		Num.append("��� �����");
	if (n % 10 == 3)
		Num.append("��� �����");
	if (n % 10 == 4)
		Num.append("������ �����");
	if (n % 10 == 5)
		Num.append("���� ������");
	if (n % 10 == 6)
		Num.append("����� ������");
	if (n % 10 == 7)
		Num.append("���� ������");
	if (n % 10 == 8)
		Num.append("������ ������");
	if (n % 10 == 9)
		Num.append("������ ������");

	std::cout << Num;
}
