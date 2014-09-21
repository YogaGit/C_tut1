#include "Test_class1.h"
#include <iostream>

Test_class1::Test_class1()
{
    //ctor
}
int Test_class1::add(int a, int b){
    std::cout << "Add used." << std::endl;
    int sum=a+b;
    return sum;
}

Test_class1::~Test_class1()
{
    //dtor
}
