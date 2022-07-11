#include <iostream>
#include<array>
using namespace std;
int main()
{
    int a[3];//={10,20,30,40};
    // for (int i = 0; i < 4; i++)
    // {
    //   cout<<a[i]<<"\t";
    // }
    int len=sizeof(a)/sizeof(a[0]);
    cout<<len;
    for (int i = 0; i < len; i++)
    {
        cout<<"enter the value of a["<<i<<"]= ";
        cin>>a[i];
    }
    for (int i = 0; i < len; i++)
    {
        cout<<"enter the value of a["<<i<<"]= "<<a[i]<<"\n";
    }
    return 0;
}