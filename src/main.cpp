#include <functions.h>
#include <equation_solver.h>

int main() {
    EquationSolver s(f);
    std::ofstream fout;
    fout.open("data/output");
    s.Solve2(fout, 0.0, 1.0);
    fout.close();

    return 0;
}
