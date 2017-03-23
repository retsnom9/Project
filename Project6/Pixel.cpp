#include "Pixel.h"



Pixel::Pixel()
{
	r = 0;
	g = 0;
	b = 0;
}

Pixel::Pixel(unsigned int r, unsigned int g, unsigned int b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}


Pixel::~Pixel()
{
}

int Pixel::GetPixelR() const
{
	return r;
}

int Pixel::GetPixelG() const
{
	return g;
}

int Pixel::GetPixelB() const
{
	return b;
}

Pixel Pixel::Mix(const Pixel& pixel)
{
	Pixel res;

	res.r = (pixel.r + r) / 2;
	res.g = (pixel.g + g) / 2;
	res.b = (pixel.b + b) / 2;

	return res;
}