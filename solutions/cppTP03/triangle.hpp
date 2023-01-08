#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shape.cpp"


class Triangle:public Forme
{
public:
	int area(int width, int height);
};






#endif