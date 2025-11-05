#include <iostream>

class Shape{
    public:
    double area;
    double volume;
};
class Cube : public Shape{
    public: 
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side;
        this->volume = side * side * side;
    }
};
class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4*3.14159*radius*radius;
        this->volume = (4/3.0) * 3.14159 * radius *radius * radius;
    }
};

int main () {

    Cube cube1(5);
    Sphere sphere1(1);
    std::cout << cube1.area << ' ' << cube1.volume << '\n';
    std::cout << sphere1.area << ' ' << sphere1.volume << '\n';

    return 0;
}