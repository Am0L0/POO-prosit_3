#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "polygone.hpp"
#include "point.hpp"

class Triangle : public Polygone {
    private:
        Point sommetA;
        Point sommetB;
        Point sommetC;
    public:
    // Constructeurs
        Triangle(): sommetA(0.0, 0.0), sommetB(1.0, 0.0), sommetC(0.0, 1.0) {}
        Triangle(Point n_A, Point n_B, Point n_C){
            setSommetA(n_A);
            setSommetB(n_B);
            setSommetC(n_C);
        }
        Triangle(const Triangle &t): sommetA(t.sommetA), sommetB(t.sommetB), sommetC(t.sommetC){}
        ~Triangle(){}
    // Getters & Setters
        void setSommetA(Point n_A){sommetA = n_A;}
        void setSommetB(Point n_B){sommetB = n_B;}
        void setSommetC(Point n_C){sommetC = n_C;}

        Point getSommetA(){return sommetA;}
        Point getSommetB(){return sommetB;}
        Point getSommetC(){return sommetC;}
};

#endif