//
// Created by tianc on 2022/3/22.
//

#ifndef PRAC4POLY_TRIANGLE_H
#define PRAC4POLY_TRIANGLE_H
#include "Shape.h"

class Triangle : public Shape{
public:
    Triangle(const std::string &name,int b_length,int length1,int length2 , double height);
    double get_area()override;
    double get_perimeter()override;

private:
    std::string t_name;
    int b_lenght;
    int side1_length;
    int side2_length;
    double t_height;



};
#endif //PRAC4POLY_TRIANGLE_H
