#include <iostream>
#include <string>
using namespace std;
class MyClass
{
private:
    int y;

public:
    int x;

    void sety(int a)
    {
        y = a;
    }

};
 int main()
{
    MyClass obj;
    obj.x = 10;
    // obj.y = 25;
    obj.sety(25);
}
