/*Create an array of objects representing books with properties like title, author, and year.
Write a function that takes the array and returns a new array with only the book titles. Print the result.)*/

#include <bits/stdc++.h>
using namespace std;
vector<string> titles;
class Book
{
private:
    string title,author;
    int year;

public:
    void set_input(string a, string b, int c)
    {
        title = a;
        author = b;
        year = c;
    }

    string filter()
    {
        return title;
    }
};
int main()
{
    int n, year;
    string title,author;
    char c;
    cout << "Enter the number of books : ";
    cin >> n;
    Book obj[n];
    cout << "Information : (title, author, year)" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> title >> author >> year;
        obj[i].set_input(title,author,year);
    }
    for (int i = 0; i < n; i++)
    {

        titles.push_back(obj[i].filter());
    }
    cout<<"\nBook Titles :"<<endl;
    for (int i = 0; i < titles.size(); i++)
    {
        cout << i + 1 << ". " << titles[i] << endl;
    }

    return 0;
}
