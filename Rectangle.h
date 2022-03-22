//
// Created by tianc on 2022/3/22.
//

#ifndef PRAC4POLY_RECTANGLE_H
#define PRAC4POLY_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape{
public:
    Rectangle(const std::string &name ,int height , int length);
    double get_area()override;
    double get_perimeter()override;
private:
    int r_height;
    int r_length;
    std::string r_name;
};


#endif //PRAC4POLY_RECTANGLE_H
