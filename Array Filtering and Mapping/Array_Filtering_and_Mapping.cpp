
/*Create an array of objects, each representing a person with properties like
name, age, and gender. Write a function to filter out all
females and then map the remaining people to an array of names. Print the final result.*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<string> names;
class Person
{
private:
    string name;
    int age;
    char gender;

public:
    void set_input(string a, int b, char c)
    {
        name = a;
        age = b;
        gender = c;
    }

    string filter()
    {
        if (this->gender == 'M')
            return this->name;
        else
            return "female";
    }
};
int main()
{
    int n, b;
    string male_names, a;
    char c;
    cout << "Enter the number of persons : ";
    cin >> n;
    Person obj[n];
    cout << "Information : (name, age, gender)" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        obj[i].set_input(a,b,c);
    }
    for (int i = 0; i < n; i++)
    {
        male_names = obj[i].filter();
        if(male_names!="female")
            names.push_back(male_names);
    }
    for (int i = 0; i < names.size(); i++)
    {
        cout << i + 1 << ". " << names[i] << endl;
    }

    return 0;
}
