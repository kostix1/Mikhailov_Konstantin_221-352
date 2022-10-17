#include <iostream>
void bubbles(int* arr, int k) {
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
			}
		}
	}
	std::cout << "{ ";
	for (int i = 0; i < k; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << '}' << '\n';

}

void withcounter(char* arr1, int size) {
	int q = 0, pod[26] = { 0 }, size_alp = 26;
	for (int i = 0; i < size; i++) {
		q = arr1[i] - 'a';
		pod[q]++;
	}
	int i = 0, r = 0;
	while (r <= size_alp) {
		if (pod[r] > 0) {
			arr1[i] = char(int('a') + r);
			i++;
			pod[r]--;
		}
		else {
			r++;
		}
	}
	std::cout << "{ ";
	for (int i = 0; i < size; i++) {
		std::cout << arr1[i] << " ";
	}
	std::cout << "}\n";
}
int main() {
	setlocale(LC_ALL, "Russian");
	const int max_size = 1000;
	// сортировка пузырьком;
	int arr[1000], n, counter = 0, k, choice = 0;
	while (true) {
		std::cout << "Что вы хотите выполнить? \n"
			<< "1. Сортировка пузырьком\n"
			<< "2. Сортировка подсчётом\n"
			<< "4. выход\n";
		std::cin >> choice;
		switch (choice) {
		case 1: {
			std::cout << "Сортировка пузырьком" << std::endl;
			std::cout << "Введите размера массива n < 1000: ";
			std::cin >> k;
			for (int i = 0; i < k; i++) {
				std::cin >> arr[i];
			}
			bubbles(arr, k);
			break;
		}
		case 2: {
			// сортировка подсчётом
			char arr1[1000];
			int size_alp = 26, pod[26] = { 0 }, q = 0, size;
			std::cout << "Сортировка подсчётом" << std::endl;
			std::cout << "Введите размер массива: ";
			std::cin >> size;
			for (int i = 0; i < size; i++) {
				std::cin >> arr1[i];
			}
			withcounter(arr1, size);
			break;
		}
		default: {
			return 0;
		}
		}
	}
}
