/*Write a function that uses the reduce function to calculate
the total value of an array of objects with a 'quantity' and 'price' property*/

#include <bits/stdc++.h>
#include<numeric>
using namespace std;


class Product
{
private:
    int price,quantity;


public:
    Product()
    {
    }
    Product(int quantity,int price)
    {
        this-> price = price;
        this-> quantity = quantity;
    }

    int get_price()
    {
        return this->price;
    }
    int get_quantity()
    {
        return this->quantity;
    }

};





void sum_(Product arr[],int len)
{
    vector<int> p,q;

    for(int i =0; i<len; i++)
    {
        p.push_back(arr[i].get_price());
        q.push_back(arr[i].get_quantity());
    }
    int total_quantity = reduce(q.begin(),q.end(),0);
    int total_price = reduce(p.begin(),p.end(),0);
    cout<<"Total Quantity : "<<total_quantity<<endl;
    cout<<"Total Price : "<<total_price<<endl;
}

int main()
{

    int num,price,quantity;

    cout << "Enter the number of Products : ";
    cin>>num;
    Product obj[num];

    cout<<"\nEnter the Properties : (quantity, price)"<<endl;

    for(int i=0; i<num; i++)
    {
        cin>>quantity>>price;
        obj[i]=Product(quantity,price);
    }

    cout<<"\nArray using reduce method - \n";
    sum_(obj,num);

    return 0;
}

