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
    }

    class Polygone {
    }

    class Cercle {
        -Point centre
        -float rayon
    }

    class Carre {
        +Carre(Point sommet1, Point sommet2, float cote)
    }

    class Rectangle {
        -Point sommet1
        -Point sommet2
        -float longueur
        -float largeur
    }

    class Triangle {
        -Point sommetA
        -Point sommetB
        -Point sommetC
    }

    Rectangle <|-- Carre
    Polygone <|-- Rectangle
    Polygone <|-- Triangle
    Cercle --> Point
    Rectangle --> Point
    Triangle --> Point
```
