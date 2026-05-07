<img width="1366" height="467" alt="Screenshot 2026-05-07 151041" src="https://github.com/user-attachments/assets/99418220-f67e-48a7-8b15-e6c9f83833c7" />

# 🚀 C++ Object Oriented Programming (OOP) Programs Collection

## 📌 Project Overview

This repository contains multiple C++ programs based on important Object Oriented Programming (OOP) concepts. These programs are specially designed for students preparing for:

- BCA Practical Exams
- Viva Questions
- College Assignments
- OOP Concept Revision
- Basic C++ Practice

The project includes simple and understandable examples of:

- Classes and Objects
- Constructors
- Encapsulation
- Inheritance
- Polymorphism
- Virtual Functions
- Pure Virtual Functions
- Abstract Classes
- Array of Objects

All programs are written in beginner-friendly format with clean syntax and easy logic.

---

# 📂 Project Structure

OOP-Programs/
│
├── q1.cpp
├── q2.cpp
├── q3.cpp
├── q4.cpp
├── q5.cpp
└── README.md

---

# 🖥 Programming Language

- Language: C++
- Standard: C++11
- Compiler Supported:
  - GCC
  - Turbo C++
  - Dev C++
  - VS Code
  - CodeBlocks

---

# 📘 Concepts Covered

| Concept | Description |
|---|---|
| Class & Object | Basic structure of OOP |
| Constructor | Object initialization |
| Encapsulation | Data hiding |
| Inheritance | Reusing base class properties |
| Function Overriding | Redefining parent function |
| Virtual Function | Runtime polymorphism |
| Abstract Class | Pure virtual implementation |
| Dynamic Binding | Runtime function call |

---

# 🔹 Program 1 : Student Management System

## 📄 File Name
q1.cpp

## 📚 Concepts Used

- Class and Object
- Constructor
- Array of Objects
- Data Members
- Member Functions

## 📝 Description

This program creates a student class that stores:

- Student Name
- Roll Number

The constructor is used for initialization and an array of objects is used to store multiple student records.

## ⚙ Features

✅ Store student details  
✅ Use constructor initialization  
✅ Display information  
✅ Array of objects implementation  

## 💻 Full Code

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

## 📌 Example Output

Student name is          : parthrajsinh
Student ROll number is   : 50

Student name is          : Gnandipsinh
Student ROll number is   : 51

---

# 🔹 Program 2 : Car Information System

## 📄 File Name
q2.cpp

## 📚 Concepts Used

- Encapsulation
- Class and Object
- Member Function
- Data Hiding

## 📝 Description

This program stores car information like:

- Car Model
- Manufacturing Year
- Car Speed

The values are assigned using a member function called setdata().

## ⚙ Features

✅ Store car details  
✅ Display data  
✅ Use encapsulation  
✅ User-friendly structure  

## 💻 Full Code

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

## 📌 Example Output

car model: scropio
car year : 2026
car speed: 150

---

# 🔹 Program 3 : Device Inheritance Program

## 📄 File Name
q3.cpp

## 📚 Concepts Used

- Single Inheritance
- Base Class
- Derived Class
- Protected Members

## 📝 Description

This program demonstrates inheritance using:

- Base Class → Device
- Derived Classes → Laptop and SmartPhone

## ⚙ Features

✅ Inheritance implementation  
✅ Code reusability  
✅ Protected access members  
✅ Multiple derived classes  

## 💻 Full Code

#include <iostream>
using namespace std;

class Device
{
protected:
    string brand;
    int power;
};

class Laptop : public Device
{
public:
    void setData(string b, int p)
    {
        brand = b;
        power = p;
    }

    void display()
    {
        cout << "Laptop     : " << brand << " " << power << endl;
    }
};

class SmartPhone : public Device
{
public:
    void setData(string b, int p)
    {
        brand = b;
        power = p;
    }

    void display()
    {
        cout << "SmartPhone : " << brand << " " << power << endl;
    }
};

int main()
{
    Laptop l;
    SmartPhone s;

    l.setData("ASUS", 80);
    l.display();

    s.setData("iphone", 45);
    s.display();

    return 0;
}

## 📌 Example Output

Laptop     : ASUS 80
SmartPhone : iphone 45

---

# 🔹 Program 4 : Virtual Function Program

## 📄 File Name
q4.cpp

## 📚 Concepts Used

- Virtual Function
- Function Overriding
- Runtime Polymorphism

## 📝 Description

This program calculates discounts for different electronic products using virtual functions.

## ⚙ Features

✅ Runtime polymorphism  
✅ Virtual function implementation  
✅ Function overriding  
✅ Different discount calculations  

## 💻 Full Code

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

## 📌 Example Output

TV discount is    : 5000
Tablet discount is: 4000

---

# 🔹 Program 5 : Abstract Class Example

## 📄 File Name
q5.cpp

## 📚 Concepts Used

- Abstract Class
- Pure Virtual Function
- Dynamic Polymorphism

## 📝 Description

This program demonstrates abstract classes using animal examples.

## ⚙ Features

✅ Abstract class implementation  
✅ Pure virtual functions  
✅ Dynamic binding  
✅ Runtime polymorphism  

## 💻 Full Code

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

    for (int i = 0; i < 2; i++)
    {
        animals[i]->MakeSound();
        animals[i]->move();
        cout << endl;
    }

    for (int i = 0; i < 2; i++)
    {
        delete animals[i];
    }

    return 0;
}

## 📌 Example Output

lion sound
lion move

Fish sound
Fish move

---

# ⚙ How To Compile And Run

## 🔹 Compile Program

g++ filename.cpp -o output

Example:

g++ q1.cpp -o q1

## 🔹 Run Program

Windows:
q1.exe

Linux / Mac:
./q1

---

# 🎯 Educational Benefits

- Understand OOP fundamentals
- Learn practical coding
- Prepare for viva exams
- Improve problem-solving skills
- Practice inheritance and polymorphism

---

# 👨‍💻 Author

Created By:
Gnandipsinh Gohil

---

# ⭐ Conclusion

This repository provides complete understanding of important Object Oriented Programming concepts in C++. These programs are useful for practical exams, assignments, viva preparation, and improving coding knowledge.
