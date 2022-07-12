#include <iostream>
using namespace std;

class sample
{
public:
    void func(int x)
    {
        cout << "Value of x is " << x;
    }
    void func(double x)
    {
        cout << "\n Value of x is " << x;
    }
    void func(int x, int y)
    {
        cout << "\n Value of x and y is " << x << y;
    }
};

int main()
{
    sample s;
    s.func(7);
    s.func(9.132);
    s.func(7, 4);
    return 0;
}