#include <iostream>

using namespace std;

class A
{
    int a;
    public :
    void getA()
    {
        cout<<"\nEnter A : ";
        cin>>a;
    }
    void putA()
    {
        cout<<"\nA : "<<a;
    }
};

class B:public A    
{
    int b;
    public:
    void getB()
    {
        cout<<"\nEnter B : ";
        cin>>b;
    }
    void putB()
    {
        cout<<"\nB : "<<b;
    }
};

class C:public B    
{
    int c;
    public:
    void getC()
    {
        cout<<"\nEnter C : ";
        cin>>c;
    }
    void putC()
    {
        cout<<"\nC : "<<c;
    }
};



int main()
{
    C b1;
    b1.getA();
    b1.getB();
    b1.getC();
    b1.putA();
    b1.putB();
    b1.putC();

    return 0;

}