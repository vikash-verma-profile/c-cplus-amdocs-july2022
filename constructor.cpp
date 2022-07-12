#include <iostream>
using namespace std;

class person
{
    // data members
    //char name[20];
    string name;
    int id;

public:
    person(int _id)
    {
        id = _id;
    }
    // member functions
    void getData();
    void showData()
    {
        cout << "Person name is " << name<<"\n";
        cout << "Id received from Constructor " << id;
    }
};
void person::getData()
{
    cout << "Enter person name";
    cin >> name;
}
int main()
{
    person p1(12);
    p1.getData();
    p1.showData();
    return 0;
}