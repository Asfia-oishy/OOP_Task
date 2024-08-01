
/*Write a function that searches an array of objects for a specific person by name.
 If found, modify their age property. Print the updated array.*/

#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
    string name;
    int age;


public:
    Person()
    {
    }
    Person(string name,int age)
    {
        this-> name = name;
        this-> age = age;
    }
    string get_name()
    {
        return name;
    }
    void modify_age(int age)
    {
        this->age = age;
    }

    void show()
    {
        cout<<name<<" "<<age<<endl;
    }


};



void find_person(Person arr[],int num,string p)
{
    cout<<"\nAfter Modification of Age : \n";
    int age;
    for(int i =0; i<num; i++)
    {
        if(arr[i].get_name()==p)
        {
            cout<<"\nNew Age : ";
            cin>>age;
            arr[i].modify_age(age);
        }

    }
    for(int i=0; i<num; i++)
    {

        arr[i].show();
    }
}

int main()
{
    string name,find_p;
    int age,num;
    cout << "Enter the number of persons : ";
    cin>>num;
    Person obj[num];

    cout<<"Enter the Properties : (name, age)"<<endl;
    for(int i=0; i<num; i++)
    {
        cin>>name>>age;
        obj[i]=Person(name,age);
    }
    cout<<"\nArray Before Modification : \n";
    for(int i=0; i<num; i++)
    {

        obj[i].show();
    }
    cout<<"\nEnter the name of the person: \n";
    cin>>find_p;

    find_person(obj,num,find_p);

    return 0;
}

