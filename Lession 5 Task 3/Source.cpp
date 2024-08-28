#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhomb.h"
#include "PrintFigure.h"

int main() {

	setlocale(LC_ALL, "Russian"); system("chcp 1251");

	Triangle Triangle1(10, 20, 30, 50, 60, 70);
	printFigure(&Triangle1);

	RightTriangle rightTriangle1(10, 20, 30, 50, 60);
	printFigure(&rightTriangle1);

	IsoscelesTriangle isoscelesTriangle1(10, 20, 50, 60);
	printFigure(&isoscelesTriangle1);

	EquilateralTriangle equilateralTriangle1(30);
	printFigure(&equilateralTriangle1);

	Quadrilateral Quadrilateral1(10, 20, 30, 40, 50, 60, 70, 80);
	printFigure(&Quadrilateral1);

	Rectangle Rectangle1(10, 20);
	printFigure(&Rectangle1);

	Square Square1(20);
	printFigure(&Square1);

	Parallelogram Parallelogram1(20,30 ,30 , 40);
	printFigure(&Parallelogram1);

	Rhomb Rhomb1(30, 30, 40);
	printFigure(&Rhomb1);

	system("pause");
}