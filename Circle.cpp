//
// Created by tianc on 2022/3/22.
//

#include "Circle.h"

Circle::Circle(const std::string &name, int diameter) : Shape(name) {
    this->c_name = name;
    this->m_diameter = diameter;
}

double Circle::get_area(){
   return pi * this->m_diameter;
}
double Circle::get_perimeter(){

    return pi * (this->m_diameter);
}

