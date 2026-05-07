#include <iostream>
using namespace std;

class animal
{
public:
    virtual void MakeSound() = 0;

    virtual void move() = 0;
};

class lion : public animal
{

public:
void MakeSound()
{
    cout<<"lion sound"<<endl;

}

void move()
{
    cout<<"lion move "<<endl;
}
  
};

class Fish : public animal   
{
public:
    void MakeSound()
    {
        cout << "Fish sound" << endl;
    }
    void move()
    {
        cout << "Fish move" << endl;
    }
};


int main()
{

     animal* animals[2];

    animals[0] = new lion();
    animals[1] = new Fish();

    for (int i = 0; i < 2; i++) {
        animals[i]->MakeSound();
        animals[i]->move();
        cout << endl;
    }

    
    for (int i = 0; i < 2; i++) {
        delete animals[i];
    }

    return 0;
}



