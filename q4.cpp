#include <iostream>
using namespace std;

class Device
{
public:
    int calculateDiscount()
    {
        return 0;
    }
};

class Tv : public Device
{
public:
    virtual int calculateDiscount()
    {
        return 5000;
    }
};

class Tablet : public Device
{
public:
    virtual int calculateDiscount()
    {
        return 4000;
    }
};

int main()
{

    Tv T;
    Tablet b;

    cout <<"TV discount is    : "<< T.calculateDiscount() << endl;
    cout <<"Tablet discount is: " <<b.calculateDiscount() << endl;

    return 0;
}