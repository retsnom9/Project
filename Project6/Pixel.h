#pragma once
class Pixel
{
public:
	Pixel();
	Pixel(unsigned int r, unsigned int g, unsigned int b);
	int GetPixelR()const;
	int GetPixelG()const;
	int GetPixelB()const;
	void SetPixelR(unsigned int red);
	void SetPixelG(unsigned int green);
	void SetPixelB(unsigned int blue);
	Pixel Mix(const Pixel& pixel);

	~Pixel();

private:
	unsigned int r, g, b;
};

