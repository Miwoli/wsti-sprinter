#include "sprinter.hpp"

void Sprinter::add(double time) {
    if (laps == 0) {
        best = time;
        worst = time;

    } else {
        if (time < best) {
            best = time;
        } else if (time > worst) {
            worst = time;
        }
    }

    total += time;
    laps++;
}

double Sprinter::get_avarage() {
    return total/laps;
}