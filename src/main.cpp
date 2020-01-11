#include <iostream>
#include "sprinter.hpp"

int main(int argc, char** argv) {
    std::cout << "Sprinter helper program" << std::endl;

    Sprinter run;
    double temp = 1;

    while (temp >= 0) {
        std::cout << "Type your lap time. Type negative number to display results and exit." << std::endl;
        std::cin >> temp;

        if (temp >= 0) {
            run.add(temp);
        }
    }

    std::cout << "Best time: " << run.best << std::endl;
    std::cout << "Worst time: " << run.worst << std::endl;
    std::cout << "Avarage: " << run.get_avarage() << std::endl;
    std::cout << "Total time on track: " << run.total << " on: " << run.laps << " laps." << std::endl;

    std::getchar();
    return 0;
}