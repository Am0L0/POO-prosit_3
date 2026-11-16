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
        sommet1=s1;
        sommet2=s2;
        longueur=L;
        largeur=l;
    }

    Rectangle(){
        Point sommet1;
        Point sommet2(1,1);
        longueur=1;
        largeur=1;
    }

    void S1setter(Point s1){
        sommet1=s1;
    }

    void S2setter(Point s2){
        sommet2=s2;
    }

    void Lsetter(float L){
        longueur=L;
    }

    void Lsetter(float l){
        largeur=l;
    }

    Point S1getter(){
        return sommet1;
    }

    Point S2getter(){
        return sommet2;
    }

    float Lgetter(){
        return longueur;
    }

    float lgetter(){
        return largeur;
    }

    ~Rectangle(){
    }
};

#endif