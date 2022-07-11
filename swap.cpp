#include <iostream>
using namespace std;
void Swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"Value of a and b are :- a="<<a<<" b= "<<b;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    Swap(a,b);
    return 0;
}
