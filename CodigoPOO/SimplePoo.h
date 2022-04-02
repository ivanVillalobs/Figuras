#pragma once
#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Canva.h"
#include "Trianglerectangle.h"
#include "Menu.h"

int main() {
	Shape* s = nullptr;
	Canva c;
	int option = 0;
	std::cout << "Que quieres imprimir?" << std::endl;
	std::cin >> option;
	if (option == 1)
		s = new Square();
	else if (option == 2)
		s = new Triangle();
	else if (option == 3)
		s = new Rectangle();
	else if (option == 4)
		s = new Trianglerectangle();


	if (s != nullptr) {
		c.printShape(s);
		delete s;
	}
	std::cout << "--------------------------------" << std::endl;
	return 1;

	/*ahi muere profe, ya me desespere, necesito mas tiempo y un descanso, llevo desde las 7 y ya son las 9 :') */
}
class SimplePoo
{
};