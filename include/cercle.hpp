#ifndef CERCLE_HPP
#define CERCLE_HPP

#include "point.hpp"
#include <cmath>

class Cercle{
    private:
        Point centre;
        float rayon;
    public:
    // Constructeurs
        Cercle(): centre({0.0, 0.0}), rayon(1.0) {}
        Cercle(Point n_centre, float n_rayon){
            setCentre(n_centre);
            setRayon(n_rayon);
        }
        Cercle(const Cercle &c): centre(c.centre), rayon(c.rayon){}
        ~Cercle(){}
    // Getters & Setters
        void setCentre(Point n_centre){centre = n_centre;}
        void setRayon(float n_rayon){rayon = n_rayon;}

        Point getCentre(){return centre;}
        float getRayon(){return rayon;}
    // Methode
        float CalculeAire(void);
        float CalculePerimetre(void);
};

float Cercle::CalculeAire(){
    return M_PI * rayon * rayon;
}

float Cercle::CalculePerimetre(){
    return 2 * M_PI * rayon;
}

#endif