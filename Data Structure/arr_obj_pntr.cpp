#include<iostream>
using namespace std;
class shop
{
    int id;
    float price;
public:
    void setData(int a, float b)
    {
        id=a;
        price=b;
    }
    void getData()
    {
        cout<<"The code of this item is "<< id<<endl;
        cout<<"this price of the item is "<<price<<endl;
    }
};
int main()
{

    int size;
    shop *ptr =new shop[size];
    shop *ptrtemp=ptr;
    for(int i=0; i<size; i++)
    {
        int a;
        float b;

        cout<<"Enter the id and price of item" <<i+1<<endl;
        cin>>a>>b;
        ptr->setData(a,b);
        ptr++;

    }
    for(int i=0; i<size;i++)
    {
        cout<<"item number"<<i+1<<endl;
        ptrtemp->getData();
        ptrtemp++;

    }


    return 0;

}
