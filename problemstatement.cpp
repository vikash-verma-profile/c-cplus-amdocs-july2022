#include <iostream>
using namespace std;

class Person
{
protected:
    string Name;

public:
    Person(string name)
    {
        Name = name;
    }
    void showname()
    {
        cout << "My Name is " + Name;
    }
};
class Teacher : public Person
{
public:
    Teacher(string name) : Person(name)
    {
        Name = name;
    }
    void explain()
    {
        cout << "explain";
    }
};
class Student : public Person
{
public:
    Student(string name) : Person(name)
    {
        Name = name;
    }
    void study()
    {
        cout << "study";
    }
};
int main()
{
   Teacher t("Vikash Verma");
   Student s("Rohit");
    t.explain();
    s.study();
    t.showname();
    s.showname();
    
    return 0;
}