// Zadanie_2_Prostokat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


void widthFunc(int width) {
	for (int i = 0; i < width; i++) {
		std::cout << "x";
	}
	std::cout << "\n";
}

void heightFunc(int width, int height) {
	int i = 0;
	do {
		std::cout << "x";
		for (int i = 0; i < width - 2; i++) {
			std::cout << " ";
		}
		std::cout << "x\n";
		i++;
	} while (i + 2 < height);
}
int main() {
	int width, height;

	std::cout << "Podaj szerokosc prostokata: "; // width
	std::cin >> width;
	std::cout << "Podaj wysokosc prostokata: "; // height
	std::cin >> height;
	std::cout << "\n";

	widthFunc(width);
	heightFunc(width, height);
	widthFunc(width);

	return 0;
}
