#include <iostream>

void swap(int& a, int& b);

int main()
{
	int i = 2, j = 5;
	std::cout << i << std::endl;
	std::cout << j << std::endl;
	swap(i, j);
	std::cout << "swap" << std::endl;
	std::cout << i << std::endl;
	std::cout << j << std::endl;

	return EXIT_SUCCESS;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}