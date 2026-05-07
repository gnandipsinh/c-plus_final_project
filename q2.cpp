#include<iostream>
using namespace std;

class car
{
private:
    string Car_Model;
    int Car_year;
    int Car_speed;
public:
    void setdata(string model,int year,int speed)
    {
        Car_Model=model;
        Car_year=year;
        Car_speed=speed;
       
    }

    void display()
    {
        cout<<"car model: "<<Car_Model<<endl;
        cout<<"car year : "<<Car_year<<endl;
        cout<<"car speed: "<<Car_speed<<endl;

    }
    
    
};


int main()
{
	
	 car C;
    C.setdata("scropio",2026,150);
    C.display();
	
	
	
	return 0;	
}


