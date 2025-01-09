#include <iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setDataBySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber(){
        cout<<"Your complex Number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(1,2);
    c2.setData(3,4);
    c3.setDataBySum(c1,c2);
    c3.printNumber();
    return 0;
}