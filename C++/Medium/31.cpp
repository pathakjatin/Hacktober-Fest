#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a)
    {
        return a + 1;
    }
};
int main()
{
    Calculator calc;
    cout << calc.add(5, 3) << endl;
    return 0;
}
