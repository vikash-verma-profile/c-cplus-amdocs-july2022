#include <iostream>
using namespace std;

struct student{
    int roll;
    string name;
} p1;

int main()
{
    cout<<"Enter roll number";
    cin>>p1.roll;
    cout<<"Roll Number is"<<p1.roll;
    return 0;
}