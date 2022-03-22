//
// Created by tianc on 2022/3/22.
//

#include "Shape.h"

#include <utility>

using namespace std;
Shape::Shape(string name){
    this->s_name = name;
}

double Shape::get_area() {
    return 0.0;

}

std::string Shape::get_name() {
    return this->s_name;
}