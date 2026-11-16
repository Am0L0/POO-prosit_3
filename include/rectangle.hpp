#ifndef RECT_HPP
#define RECT_HPP

#include "point.hpp"
#include "polygone.hpp"

class Rectangle : public Polygone {
    private:
        Point sommet1;
        Point sommet2;
        float longueur;
        float largeur;
    public:
        Rectangle(Point s1,Point s2,float L,float l){
            setS1(s1);
            setS2(s2);
            setLong(L);
            setLarg(l);
        }
        
        Rectangle(): sommet1({0.0, 0.0}), sommet2({1.0, 1.0}), longueur(1.0), largeur(1.0){}
        ~Rectangle(){}

        void setS1(Point s1){sommet1=s1;}
        void setS2(Point s2){sommet2=s2;}
        void setLong(float L){longueur=L;}
        void setLarg(float l){largeur=l;}

        Point getS1(){return sommet1;}
        Point getS2(){return sommet2;}
        float getLong(){return longueur;}
        float getLarg(){return largeur;}

        float CalculePerimetre(float L, float l);
        float CalculeAire(float L, float l);
};

float Rectangle::CalculePerimetre(float L,float l){
    return 2*(L+l);
}

float Rectangle::CalculeAire(float L,float l){
    return L*l;
}
#endif