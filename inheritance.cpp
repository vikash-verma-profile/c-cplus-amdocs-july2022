#include <iostream>
using namespace std;

class Person
{
    int id;
    char name[100];

public:
    void set_p()
    {
        cout << "Enter the Id: ";
        cin >> id;
        fflush(stdin);
        cout << "Enter the name: ";
        cin.get(name, 100);
    }
    void display_p()
    {
        cout << endl
             << id << "\t" << name;
    }
};

class Student : private Person
{
    char course[50];
    int fee;

public:
    void set_s()
    {
        set_p();
        fflush(stdin);
        cout << "Enter the Course Name: ";
        cin.getline(course, 50);
        fflush(stdin);
        cout << "Enter the Couse Fees: ";
        cin >> fee;
    }
    void display_s()
    {
        display_p();
        cout << "\t" << course << "\t" << fee;
    }
};

int main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}