#include <iostream>
using namespace std;

class base
{
public:
    virtual void print()
    {
        cout << "Base class print";
    }
    void show()
    {
        cout << "Base class show";
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "Derived class print";
    }
    void show()
    {
        cout << "Derived class show";
    }
};

int main()
{
    // base *s;
    // derived d;
    // s = &d;
    // s->print();
    // s->show();
    derived d;
    base b=d;
    b.print();
    b.show();

    return 0;
}