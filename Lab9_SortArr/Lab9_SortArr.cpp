// Lab9_SortArr
#include <iostream>
#include<time.h>
#include<windows.h>
using namespace std;
void Met1(int size, float* arr)
{

	int key = 0, j = 0;
	for (int i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
void Met2(int size, float* arr)
{
	float min = 2147483647;
	for (int j = 0; j < size; j++)
	{
		int min = j;
		for (int i = j+1; i < size; i++)
		{
			if (arr[i] < arr[min])
			{
				min = i;
			}
			float a = arr[j];
			arr[j] = arr[min];
			arr[min] = a;
		}
	}
}

void Met3(int size, float* arr)
{
	float tmp;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1; j++)
		{

			if (arr[j]>arr[j+1])
			{
				tmp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int size=-1;
	string typeFill = "слово";
	while (size <= 0)
	{
		cout << "Введите размер массива:"<<endl;
		cin >> size;
	}
	float* arr = new float[size];
	cout << "Введите тип заполнения массива (случайно, вручную)"<<endl;
	while (typeFill != "вручную" && typeFill != "случайно")
	{
		cin >> typeFill;
		if (typeFill!="вручную" && typeFill!="случайно")
		{
			cout << "Неизвестная команда!" << endl;
		}
	}
	if (typeFill == "вручную")
	{
		cout << "Введите массив:" << endl;
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 20;
		}
		cout << "Изначальный массив:" << endl;
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << "\t";
		}
	}
	cout << endl<<endl;
	cout << "Выберите метод сортировки:" << endl << "1. Метод вставки" << endl << "2. Метод выбора" << endl << "3. Метод обмена" << endl;
	int l = -1;
	while (l<=0||l>3)
	{
		cin >> l;
		if (l<=0||l>3)
		{
			cout << "Ошибка" << endl;
		}
	}
	switch (l)
	{
	case(1):
		Met1(size, arr);
		break;
	case(2):
		Met2(size, arr);
		break;
	case(3):
		Met3(size, arr);
		break;
	default:
		break;
	}
	cout << endl<<endl <<"Отсартированный массив:" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
