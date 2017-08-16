#include<iostream>
using namespace std;
class student
{
    int id;
    string name;
    public:
    student()    //constructor
    {
        name="Galib";
        id=1;
    }
    void setId(int i)
    {
        id=i;
    }
    void setName(string n)
    {
        name=n;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    void show()
    {
        cout<<"Id :"<<id<<endl<<"Name :"<<name<<endl;

    }
};

int main()
{
    student s;
    s.show();
}
