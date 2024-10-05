#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    int count = 1;
    cout << "Enter a string: ";
    cin >> str;
    for (int i = 0; i <= str.length() ; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    cout << "Number of vowels: " << count  << endl;
    return 0;
}
