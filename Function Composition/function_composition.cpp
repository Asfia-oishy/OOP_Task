/*Write three functions: one to square a number, one to double a number,
 and one to add 5 to a number. Compose these functions to create a
 new function that squares a number, doubles the result, and then adds 5.*/

#include <bits/stdc++.h>
using namespace std;
vector<string> titles;
class Function
{
private:
    int num;

public:
    Function()
    {
    }
    Function(int num)
    {
        this->num = num;
    }
    int square_(int val)
    {
        return (val*val);
    }
    int double_(int val)
    {
        return (val*2);
    }
    int add_5(int val)
    {
        return (val+5);
    }

    int composite_func(int val)
    {
        int result;
        result = add_5(double_(square_(val)));
        return result;
    }
};
int main()
{
    int num;
    cout << "Enter the number : ";
    cin>>num;
    Function obj;

    cout<<"\nOutput after square,double and adding 5 : ";
    cout<<obj.composite_func(num)<<endl;

    return 0;
}

