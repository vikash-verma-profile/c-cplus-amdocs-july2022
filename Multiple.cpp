#include <iostream>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is vehicle \n";
    }
};
class FourWheeler
{
public:
    FourWheeler()
    {
        cout << "This is FourWheeler \n";
    }
};
class Car : public Vehicle, public FourWheeler
{
};
int main()
{
    Car obj;
    return 0;
}