#pragma once
#include "Square.h"

class Rectangle : public Square
{
public:
	void draw() {
		for (int i = 0; i < this -> lado; i++)
		{				
			for (int j = 0; j < this -> lado; j++)
				if ((i == 0) || (j == 0) || (i == this->lado - 1) || (j == this->lado - 1)) {
					std::cout << "*";
				}
				else {
					std::cout <<" ";
				}
			lado = 10;
			std::cout << "" << std::endl;
		}
	}
};

/*se que no es un cuadrado como tal, pero la consola hace que se parezca, y lo hice asi, porque no me salio el cuadrado*/