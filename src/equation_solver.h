#pragma once

#include <fstream>

class EquationSolver {
public:
    typedef double (*right_part)(double x, double y);

    EquationSolver(right_part function, double step, double range);
    EquationSolver(right_part function);

    void SetStep(double new_step);
    void SetRange(double new_range);

    void Solve2(std::ofstream &fout, double x0, double y0);

private:
    double step_;
    double range_;

    right_part f_;
};
