```
 _______  _______  _______  _______ __________________   ______     _______  _______  _______ 
(  ____ )(  ____ )(  ___  )(  ____ \\__   __/\__   __/  / ___  \   (  ____ )(  ___  )(  ___  )
| (    )|| (    )|| (   ) || (    \/   ) (      ) (     \/   \  \  | (    )|| (   ) || (   ) |
| (____)|| (____)|| |   | || (_____    | |      | |        ___) /  | (____)|| |   | || |   | |
|  _____)|     __)| |   | |(_____  )   | |      | |       (___ (   |  _____)| |   | || |   | |
| (      | (\ (   | |   | |      ) |   | |      | |           ) \  | (      | |   | || |   | |
| )      | ) \ \__| (___) |/\____) |___) (___   | |     /\___/  /  | )      | (___) || (___) |
|/       |/   \__/(_______)\_______)\_______/   )_(     \______/   |/       (_______)(_______)

```
```mermaid
classDiagram
    class Point {
        -float x
        -float y
        +Point()
        +Point(float n_x, float n_y)
        +Point(const Point &p)
        +~Point()
        +setX(float n_x) void
        +setY(float n_y) void
        +getX() float
        +getY() float
    }

    class Polygone {
    }

    class Cercle {
        -Point centre
        -float rayon
        +Cercle()
        +Cercle(Point n_centre, float n_rayon)
        +Cercle(const Cercle &c)
        +~Cercle()
        +setCentre(Point n_centre) void
        +setRayon(float n_rayon) void
        +getCentre() Point
        +getRayon() float
    }

    class Carre {
        +Carre(const Point &a, const Point &b, const float &L, const float &l)
    }

    class Rectangle {
        -Point sommet1
        -Point sommet2
        -float longueur
        -float largeur
        +Rectangle()
        +Rectangle(Point s1, Point s2, float L, float l)
        +~Rectangle()
        +setS1(Point s1) void
        +setS2(Point s2) void
        +setLong(float L) void
        +setLarg(float l) void
        +getS1() Point
        +getS2() Point
        +getLong() float
        +getLarg() float
    }

    class Triangle {
        -Point sommetA
        -Point sommetB
        -Point sommetC
        +Triangle()
        +Triangle(Point n_A, Point n_B, Point n_C)
        +Triangle(const Triangle &t)
        +~Triangle()
        +setSommetA(Point n_A) void
        +setSommetB(Point n_B) void
        +setSommetC(Point n_C) void
        +getSommetA() Point
        +getSommetB() Point
        +getSommetC() Point
    }

    Rectangle <|-- Carre
    Polygone <|-- Rectangle
    Polygone <|-- Triangle
    Cercle --> Point
    Rectangle --> Point
    Triangle --> Point
```
