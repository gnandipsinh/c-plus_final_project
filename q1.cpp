#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int RollNumber;

public:
    student(string n, int r)
    {
        name = n;

        RollNumber = r;
    }

    void display()
    {
        cout << "Student name is          : " << name << endl;

        cout << "Student ROll number is   : " << RollNumber << endl;
    }




};


int main()
{
    student students[2]{
        student("parthrajsinh", 50),
        
        student("Gnandipsinh", 51),
    };

    for (int i = 0; i < 2; i++)
    {
        students[i].display();
    }

    return 0;
}