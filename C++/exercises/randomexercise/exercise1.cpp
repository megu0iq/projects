#include <iostream>

int add(int x, int y)
{
	return x + y;
}

void printResult(int z)
{
	std::cout << "The answer is definitely: " << z << '\n';
}

int getUserInput()
{
	std::cout << "Enter any whole number integer: ";
	int x{};
	std::cin >> x;
	return x;
}
int getUserChoice(int userChoice)
{
	std::cout << "Enter 1 to start the program, enter 0 to exit the program." << std::endl;
	std::cin >> userChoice;
	return userChoice;
}
int main()
{
	int userChoice;
	while (getUserChoice(userChoice) != 0)
	{
	int x{ getUserInput() };
	int y{ getUserInput() };
	std::cout << x << " + " << y << '\n';

	int z{ add(x, 5) };
	printResult(z);
	int userChoice;
	}
	return 0;
}