#include <string>
#include <iostream>
#include "Bitmap.h"

using namespace std;
using namespace fractalimages;


int main() {


	Bitmap bitmap(800, 600);
	bitmap.write("test.bmp");

	cout << "Finished Creating a bitmap" << endl;
	return 0;
}