#pragma once
class Shape
{
private:
	int variblePrivada = 5;
protected:
	int lado = 10;
public:
	int variablePublica = 5;
	virtual void draw() {}
};