#include <iostream>
#include "Rectangle.h"
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include<string>
#include<vector>
using namespace std;

int main() {

   /* Shape *s1 = new Rectangle("R1",5,6);
    cout << s1->get_name() << endl;
    cout << s1->get_area() << endl;
    cout <<s1->get_perimeter() << endl;
    */

   /*Shape *s2 = new Circle("C1",10);
   cout << s2->get_name() << endl;
   cout << s2->get_area() << endl;
   cout <<s2->get_perimeter() << endl;

*/
   /*Shape * s3 = new Triangle("T1",10,10,10,20);
   cout << s3->get_name() << endl;
   cout << s3->get_area() << endl;
   cout <<s3->get_perimeter() << endl;*/

   vector<Shape*> shapes;
   Shape * s1 = new Triangle("T1",10,10,10,20);
   Shape *s2 = new Circle("C1",10);
   Shape * s3 = new Triangle("T1",10,10,10,20);
   shapes.push_back(s1);
   shapes.push_back(s2);
   shapes.push_back(s3);

    for (auto i:shapes) {
        

    };








}
