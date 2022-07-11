#include <iostream>
using namespace std;
void Swap(int &a,int &b);//signature of the function
int main()
{
    
    int a,b;
    cout<<"Enter the value of a and b ";
    cin>>a>>b;
    cout<<"Value of a and b before swap :- a="<<a<<" b= "<<b<<"\n";
    Swap(a,b);
    cout<<"Value of a and b after swa5p :- a="<<a<<" b= "<<b<<"\n";
    return 0;
    
}
//Defination of function
void Swap(int &a,int &b)
{
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"Value of a and b in swap function :- a="<<a<<" b= "<<b<<"\n";
}