#include <iostream>
#include "cylinder.h"

int main()
{

    // stack object with . notation
    Cylinder cylinder1(10, 10);

    cylinder1.volume();

    // Managing a stack object through pointers
    Cylinder *p_cylinder1 = &cylinder1;

    // std::cout << "volume : " << (*p_cylinder1).volume() << std::endl;
    std::cout << "volume : " << p_cylinder1->volume() << std::endl;

    // Create a cylinder heap object through the new operator

    // Heap object: . dereference and . notation
    // Cylinder *p_cylinder3 = new Cylinder(100, 2); // Heap
    // std::cout << "volume(clylinder3) : " << (*p_cylinder3).volume() << std::endl;
    // std::cout << "base_rad(cylinder3) : " << (*p_cylinder3).get_base_radius() << std::endl;
    // delete cylinder3;

    Cylinder *p_cylinder2 = new Cylinder(100, 2); // Heap

    std::cout << "volume(clylinder2) : " << p_cylinder2->volume() << std::endl;
    std::cout << "base_rad(cylinder2) : " << p_cylinder2->get_base_radius() << std::endl;

    delete p_cylinder2;

    return 0;
}
