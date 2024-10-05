#include <iostream>
int main()
{
    float a = 0.1f;
    float b = 0.2f;
    float c = a+b;
    if (c == 0.3f)
    {
        std::cout << "Equal" << std::endl;
    }
    else
    {
        std::cout << "Not Equal" << std::endl;
    }
    return 0;
}
