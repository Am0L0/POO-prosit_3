#ifndef CARRE_HPP
#define CARRE_HPP

#include "rectangle.hpp"
#include "point.hpp"

class Carre : public Rectangle {
   public:
   Carre( const Point& a, const Point&b, const float&L, const float&l)
   : Rectangle (a, b, L, l) {}
};

#endif