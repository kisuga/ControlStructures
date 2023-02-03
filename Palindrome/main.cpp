#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Hello palindrome! " << endl;
	int number;//число введенное в клавиатуры
	int reverse=0;// число записанное наоборот
	cout << "Введите число:"; cin >> number;
	int copy = number;//копируем значение намбер, чтобы введенное пользователем число осталось неизменным
	//а в процессе деления будем изменять сopy
	while (copy)
	{
		reverse *= 10;
		reverse += copy % 10;
		copy /= 10;
	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "ПАлиндром" << endl;
	}
	else
	{
		cout << "Не палиндром" << endl;
	}
	
}
