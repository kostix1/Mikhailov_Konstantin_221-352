#include <iostream>
using std::cin;
using std::cout;

void task1() {
	int n;
	cout << "Enter your number:";
	cin >> n;
	for (int b = 0; b <= n; b++) {
		for (int a = 0; a <= b; a++) {
			cout << a;
		}
		cout << "\n";
	}
	cout << "\n";
}

	void task3() {

		int a;
		int b;
		cout << "For stop input press 0\n" << "Enter your numbers : \n";
		double sum = 0;
		int number = 0;
		cin >> b;
		while (b != 0) {
			if (b == 0) {
				break;
			}
			sum = sum + b;
			number = number + 1;
			cin >> b;
		}
		cout << sum / number << '\n';
	}

	int main() {
		int choice;
		while (true)
		{
			cout << "Enter the number of action that you want to run:\n"
				<< "1. Number triangle.\n"
				<< "3. Calculation of the arithmetic mean of the entered points.\n"
				<< "4. Exit.\n";
			cin >> choice;
			switch (choice)
			{
			case 1: {
				task1();
				break;
			}
	
			case 3: {
				task3();
				break;
			}
			default: {
				return 0;
			}
			}

		}

	}