#include <iostream>
using namespace std;
#define PI 3.14
#define AREA(l,b) (l*b)
int main()
{
    // int radius;
    // cout<<"Enter radius of circle";
    // cin>>radius;
    // cout<<"Circumference is :"<<2*PI*radius;
    int l1=10,l2=5,area;
    area=AREA(l1,l2);
    cout<<"Area of a rectangle is"<<area;
    return 0;
}