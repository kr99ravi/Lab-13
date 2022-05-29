#include <iostream>
using namespace std;

class A
{
public:
    int a;
    void display_A()
    {
        cout<<"a is a data member of class A."<<endl;
        cout << "value of a is : " << a << endl;
    }
};
  class B
{
public:
    int b;

    void display_B()
    {
         cout<<"a is a data member of class B."<<endl;
        cout << "value of b is : " << b << endl;
    }
};

class C : public A, public B{};

int main()
{
    C obj1;
    obj1.a = 15;
    obj1.b = 36;
    obj1.display_A();
    cout<<"<-******************->"<<endl;
    obj1.display_B();
}
