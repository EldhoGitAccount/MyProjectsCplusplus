#pragma once

using namespace std;

namespace fractalimages {

    class Mandelbrot {
    public:
       static constexpr int MAX_ITERATIONS{1000};
    public:
       Mandelbrot();
       virtual ~Mandelbrot();
       
       static int getIterations(double x, double y);

    };
}