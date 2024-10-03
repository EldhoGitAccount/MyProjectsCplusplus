#include <string>
#include <iostream>
#include "Bitmap.h"

using namespace std;
using namespace fractalimages;


int main() {
    
	constexpr int WIDTH{800};
	constexpr int HEIGHT{600};

	Bitmap bitmap(WIDTH, HEIGHT);

	//setting the entire bitmap to red
	for(int y{0}; y<HEIGHT; ++y) {
		for(int x{0}; x<WIDTH; ++x) {
			bitmap.setPixel(x, y, 255, 0, 0);
		}
	}

	bitmap.write("test.bmp");

	cout << "Finished Creating a bitmap" << endl;
	return 0;
}