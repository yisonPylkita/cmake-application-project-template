#include <iostream>
#include <boo/boo.hpp>
#include <foo/foo.hpp>


int main() 
{
    std::cout << "Hello from CMake in vs 2017" << std::endl;
    std::cout << "I am using two libs in this project:\n";
    std::cout << "    boo library - " << boo::get_version() << "\n";
    std::cout << "    foo library - " << foo::get_version() << "\n";
}