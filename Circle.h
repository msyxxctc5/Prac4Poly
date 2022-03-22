//
// Created by tianc on 2022/3/22.
//

#ifndef PRAC4POLY_CIRCLE_H
#define PRAC4POLY_CIRCLE_H
#include "Shape.h"

class Circle : public Shape{
public:
    Circle(const std::string &name, int diameter);
    double get_area() override;
    double get_perimeter() override;

private:
    double pi = 3.1415926;
    std::string c_name;
    int m_diameter;

};


#endif //PRAC4POLY_CIRCLE_H
