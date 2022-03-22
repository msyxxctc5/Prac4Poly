//
// Created by tianc on 2022/3/22.
//

#ifndef PRAC4POLY_SHAPE_H
#define PRAC4POLY_SHAPE_H
#include <string>

class Shape {
public:
    Shape(std::string name);
    virtual double get_area();
    virtual double get_perimeter() = 0;

    std::string get_name();


private:
    std::string s_name;


};


#endif //PRAC4POLY_SHAPE_H
