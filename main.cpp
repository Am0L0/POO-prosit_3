#include <iostream>
#include "include/carre.hpp"
#include "include/cercle.hpp"
#include "include/rectangle.hpp"
#include "include/polygone.hpp"
#include "include/point.hpp"
#include "include/triangle.hpp"

int main(){
    Point A(2.0,1.0);
    Point B(3.0,0.0);
    Point C(4.0,2.0);
    Point D(5.0, 0.0);
    Cercle C1(A,6.7);
    Triangle T1(B,C,D);
    Rectangle R1(A,B,1.0,1.0);
    Carre Ca1(A,B,2.0);
    std::cout << "L'aire du triangle T1 est de " << T1.getAire() << " cm² " << std::endl;
    std::cout << "Le périmètre du traingle T1 est de " << T1.getPerimetre() << std::endl;
    std::cout << "L'aire du cercle C1 est de " << C1.CalculAire() << " cm² " << std::endl;
    std::cout << "Le périmètre du cercle C1 est de " << C1.CalculPerimetre() << " cm " << std::endl;
    std::cout << "L'aire du rectangle R1 est de " << R1.Rectangle::CalculAire() << " cm² " << std::endl;
    std::cout << "Le périmètre du rectangle R1 est de " << R1.Rectangle::CalculPerimetre() << " cm " << std::endl;
    std::cout << "Le périmètre du Carré Ca1 est de " << Ca1.CalculPerimetre() << " cm " << std::endl;
    std::cout << "L'aire du Carré Ca1 est de " << Ca1.CalculAire() << " cm² " << std::endl;

}