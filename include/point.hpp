#ifndef POINT_HPP
#define POINT_HPP

#include <cmath>

class Point{
    private:
        float x;
        float y;
    public:
    // Constructeurs
        Point(): x(0.0), y(0.0){}
        Point(float n_x, float n_y){
            setX(n_x);
            setY(n_y);
        }
        Point(const Point &p): x(p.x), y(p.y){}
        ~Point(){}

    // Getters & Setters
        void setX(float n_x){x = n_x;}
        void setY(float n_y){y = n_y;}

        float getX(){return x;}
        float getY(){return y;}

    // Distance
        double distance(Point p){
            double dx = p.x - x;
            double dy = p.y - y;
            return sqrt(dx * dx + dy * dy);
        }
};

#endif