#include <iostream>
#include "Pixel.h"
using namespace std;

int main()
{
	Pixel blue(0, 0, 255), black;
	Pixel red(255, 0, 0);
	Pixel m;
	m = red.Mix(blue);
	cout << black.GetPixelR() << " " << black.GetPixelG() << " " << black.GetPixelB()
		<< endl;
	cout << m.GetPixelR() << " " << m.GetPixelG() << " " << m.GetPixelB() << endl;

	getchar();
	return 0;
}