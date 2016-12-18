#include <equation_solver.h>

EquationSolver::EquationSolver(right_part function, double step, double range) :
    step_(step),
    range_(range),
    f_(function)
{}

EquationSolver::EquationSolver(right_part function) :
    EquationSolver(function, 1e-3, 5.0)
{}

void EquationSolver::SetStep(double new_step) {
    step_ = new_step;
}

void EquationSolver::SetRange(double new_range) {
    range_ = new_range;
}

void EquationSolver::Solve2(std::ofstream &fout, double x0, double y0) {
    const double end_scope = x0 + range_;
    double x = x0;
    double y = y0;

    do {
        fout << x << ' ' << y << std::endl;
        y = y + step_ * f_(x + step_ / 2, y + step_ / 2 * f_(x, y));
        x += step_;
    } while (x < end_scope);
}
