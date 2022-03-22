//
// Created by tianc on 2022/3/22.
//

#include "Triangle.h"
#include <iostream>
using namespace std;
Triangle::Triangle(const std::string &name, int b_length, int length1, int length2, double height) : Shape(name){
    this->t_name = name;
    if(b_length+length1 > length2 || b_length+length2 > length1 || length1+length2 > b_length){
        this->b_lenght = b_length;
        this->side1_length = length1;
        this->side2_length = length2;
    }else{
        cout << "please input a valid length" << endl;
        cout << "b_length : " ;
        cin >> this->b_lenght;
        cout << '\n';
        cout << "side2_length : ";
        cin >> this->side2_length;
        cout << '\n';
        cout << "side1_length : ";
        cin >> this->side1_length;
    }

    this->t_height = height;

}

double Triangle::get_perimeter() {
    return this->b_lenght+this->side1_length+this->side2_length;
}

double Triangle::get_area() {
    return 0.5*this->b_lenght*this->t_height;
}


