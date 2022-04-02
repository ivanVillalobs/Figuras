#pragma once
#include "Triangle.h"
class Trianglerectangle : public Triangle
{
public:
	void draw() {
		std::cout << "       **\n";
		std::cout << "      *  *\n";
		std::cout << "     *    *\n";
		std::cout << "    *      *\n";
		std::cout << "   *        *\n";
		std::cout << "  *          *\n";
		std::cout << " *            *\n";
		std::cout << "****************\n";
		/*
		intente con este codigo, pero no funciono :(
		for (int k = 1; this->lado - 1; k++) {
			std::cout << ""; std::cout<<"*\n";
		}
		for (int k = 2; k <= this->lado - 1;k++) {
			for (int j = 1; j <= this->lado - k; j++) {
				std::cout << " ";
			}
			std::cout << "*";
			for (int j = 1; j <= 2 * k - 3; j++) {
				std::cout << " ";
			}
			std::cout << "*\n";
		}
		std::cout << "*";
		for (int k = 1; k <= this->lado - 1; k++) {
			std::cout << " *"<<std::endl;
		}*/
	}
};

