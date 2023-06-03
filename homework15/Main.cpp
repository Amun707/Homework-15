#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
	system("chcp 1251>nul");
	int n, m;


	// Задание
	const int rows = 10;
	const int cols = 10;
	int arr[rows][cols];
	srand(time(NULL));
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			arr[i][j] = rand() % 100 + 1;


	// Задача 1
	int sum_rows;
	std::cout << "Итоговый массив:\n";
	for (int i = 0; i < rows; i++) {
		sum_rows = 0;
		for (int j = 0; j < cols; j++) {
			std::cout << arr[i][j] << '\t';
			sum_rows += arr[i][j];
		}
		std::cout << "| sum: " << sum_rows << std::endl;
	}
	std::cout << std::endl;

	
	// Задача 2
	std::cout << "Введите число от 0 до 9 -> ";
	std::cin >> n;
	for (int i = 0; i < rows; i++) {
		arr[i][n] = rand() % 100 + 1;
		std::cout << arr[n] << " ";
	}
	std::cout << std::endl;


	return 0;
}