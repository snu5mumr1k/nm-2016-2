#include <cmath>
#include <functions.h>

double f(double x, double y) {
    return (x - x * x) * y;
}

double f1(double x, double u, double v) {
    return 2.4 * v - u;
}

double f2(double x, double u, double v) {
    return std::exp(-u) - x + 2.2 * v;
}
