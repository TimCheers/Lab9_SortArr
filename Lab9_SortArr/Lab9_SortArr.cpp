// Lab9_SortArr
#include <iostream>
#include<time.h>
#include<windows.h>
using namespace std;

float Met1(int size, float* arr)
{

}


int main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "ru");

	int size=-1;
	string typeFill="слово", typeSort="слово";
	while (size <= 0)
	{
		cout << "Введите размер массива:"<<endl;
		cin >> size;
	}
	float* arr = new float[size];
	cout << "Введите тип заполнения массива"<<endl;
	while (typeFill != "вручную" || typeFill != "случайно")
	{
		cin >> typeFill;
		if (typeFill!="вручную"||typeFill!="случайно")
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
	}
	cout << "Как отсортировать массив? (возрастание, убывание)" << endl;
	while (typeSort != "убывание" || typeSort != "возрастание")
	{
		cin >> typeSort;
		if (typeSort != "убывание" || typeSort != "возрастание")
		{
			cout << "Неизвестная команда!" << endl;
		}
	}
}
