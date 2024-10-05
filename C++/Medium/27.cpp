#include <iostream>
#include <string>
using namespace std;
int main()
{
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};
    int someDigits[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    cout << letters[1][3]<< endl;
    cout << someDigits[1][4] << endl;
    return 0;
}