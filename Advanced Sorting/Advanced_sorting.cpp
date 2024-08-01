/*Create an array of objects representing students with 'name' and 'grades' properties.
 Write a function to sort the students by average grade in descending order.*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    float grade;


public:
    Student()
    {
    }
    Student(string name,float grade)
    {
        this-> name = name;
        this-> grade = grade;
    }

    float get_grade()
    {
        return this->grade;
    }

    void show()
    {
        cout<<name<<" "<<grade<<endl;
    }


};



bool compareGrade(Student &a,Student &b)
{
    return a.get_grade()>b.get_grade();
}
void sort_grade(Student arr[],int len)
{
    sort(arr,arr+len,compareGrade);

    for(int i =0; i<len; i++)
    {
        arr[i].show();
    }
}

int main()
{
    string name;
    int num;
    float grade;
    cout << "Enter the number of Students : ";
    cin>>num;
    Student obj[num];

    cout<<"\nEnter the Properties : (name, grade)"<<endl;
    for(int i=0; i<num; i++)
    {
        cin>>name>>grade;
        obj[i]=Student(name,grade);
    }
    cout<<"\nArray Before Sorting : \n";
    for(int i=0; i<num; i++)
    {
        obj[i].show();
    }
    cout<<"\nArray After Sorting : \n";

    sort_grade(obj,num);

    return 0;
}

