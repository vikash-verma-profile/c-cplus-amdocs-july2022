#include <iostream>
using namespace std;

class sample
{
private:
    int real, image;

public:
    sample(int r = 0, int i = 0)
    {
        real = r;
        image = i;
    }
    sample operator+(sample &obj)
    {
        sample res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
    void print()
    {
        cout<<real<<"\t"<<image;
    }
};

int main()
{
    sample s1(10,5),s2(2,4);
    sample s3=s1+s2;
    s3.print();

    return 0;
}