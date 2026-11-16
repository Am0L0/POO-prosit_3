#ifndef CARRE_HPP
#define CARRE_HPP

#include "rectangle.hpp"
#include "point.hpp"

class Carre : public Rectangle {
   public:
   Carre( const Point& a, const Point&b, float cote)
   : Rectangle (a, b, cote, cote) {}
};



#endif