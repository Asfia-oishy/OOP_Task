/*Create an array of objects representing cars with properties like name, model, and year.
Write a function to sort the array of cars by
the year of manufacture in ascending order. Print the sorted array.*/

#include <bits/stdc++.h>
using namespace std;

class Cars
{
private:
    string name,model;
    int year;


public:
    Cars()
    {
    }
    Cars(string name,string model,int year)
    {
        this-> name = name;
        this-> model = model;
        this-> year = year;
    }
    int get_year()
    {
        return year;
    }

    void show()
    {
        cout<<name<<" "<<model<<" "<<year<<endl;
    }


};

bool compareByYear(Cars &a,Cars &b)
{
    return a.get_year()<b.get_year();
}
void sort_cars(Cars arr[],int len)
{
    sort(arr,arr+len,compareByYear);
    
    cout<<"\nAfter Sorted by Year : \n";
    for(int i =0; i<len; i++)
    {
        arr[i].show();
    }
}

int main()
{
    string name,model;
    int year,num;
    cout << "Enter the number of cars : ";
    cin>>num;
    Cars obj[num];

    cout<<"Enter the Properties : (name, model, year)"<<endl;
    for(int i=0; i<num; i++)
    {
        cin>>name>>model>>year;
        obj[i]=Cars(name,model,year);
    }

    sort_cars(obj,num);

    return 0;
}

