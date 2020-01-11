#ifndef SPRINTER_HPP
#define SPRINTER_HPP

class Sprinter {
    
    public:
        double best = 0;
        double worst = 0;
        double total = 0;
        int laps = 0;

        void add(double time);
        double get_avarage();
};

#endif