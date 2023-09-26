#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
private:
    double radius;
    double height;

public:
    Cylinder() {}
    Cylinder(double radius, double height);
    void setRadius(double radius);
    void setHeight(double height);
    double getRadius();
    double getHeight();
    double getVolume();
    void printVolume();
};

#endif