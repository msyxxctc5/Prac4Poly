//
// Created by tianc on 2022/3/22.
//

#include "Rectangle.h"

Rectangle::Rectangle(const std::string &name, int height, int length) : Shape(name){
    this->r_name = name;
    this->r_height = height;
    this->r_length = length;

}

double Rectangle::get_area() {
    return this->r_length*this->r_height;

}

double Rectangle::get_perimeter() {
    return 2*(this->r_length+this->r_height);
}
