#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

/*Двумерный массив вывод с помощью циклов*/

int main() 
{
	setlocale(LC_ALL, "rus");
	

	const int ROWS = 5;
	const int COLS = 8;

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) 
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}

		cout << endl;
	}

	int a; 
	a = 0;
}
