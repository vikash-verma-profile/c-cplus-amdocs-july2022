#include <iostream>
using namespace std;

class person
{
  // data members
  char name[20];
  int id;

public:
  // member functions
  void getData();
  void showData()
  {
    cout << "Person name is " << name;
  }
};
void person::getData()
{
  cout << "Enter person name";
  cin >> name;
}
int main()
{
  person p1;
  p1.getData();
  p1.showData();
  return 0;
}