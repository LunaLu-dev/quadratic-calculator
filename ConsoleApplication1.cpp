#include <iostream>
#include "Math.h"

int main()
{
    Math math;

    int a, b, c;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout << "The Awnser to life is " << math.quatric(a, b, c, 1) << " Negative is: "  << math.quatric(a, b, c, 0) << std::endl;

    //std::cout << "Hello World!\n";
}