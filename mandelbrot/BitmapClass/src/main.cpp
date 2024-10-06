#include <string>
#include <iostream>
#include <limits>
#include "Bitmap.h"
#include "Mandelbrot.h"

using namespace std;
using namespace fractalimages;


int main() {
    
	constexpr int WIDTH{800};
	constexpr int HEIGHT{600};

	Bitmap bitmap(WIDTH, HEIGHT);

	double min = numeric_limits<double>::max();
	double max = numeric_limits<double>::min();

	//setting the entire bitmap to red
	for(int y{0}; y<HEIGHT; ++y) {
		for(int x{0}; x<WIDTH; ++x) {
			
			double xFractal = (x - WIDTH/2) * 2.0/WIDTH;
			double yFractal = (y - HEIGHT/2) * 2.0/HEIGHT;

			int iterations = Mandelbrot::getIterations(xFractal, yFractal);
			uint8_t red = (uint8_t)( 256 * (double)iterations/Mandelbrot::MAX_ITERATIONS );

			bitmap.setPixel( x, y, red, 0, 0 );
			if( red < min ) min = red;
			if( red > max ) max = red;
		}
	}
    
	cout<<min<<" , "<<max<<endl;

	bitmap.write("test.bmp");

	cout << "Finished Creating a bitmap" << endl;
	return 0;
}