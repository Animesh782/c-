#include<iostream>
using namespace std;

class Area
{
    int x,y,z;

    public :
    void getdata()
    {
        cout<<"Enter dimensions : "<<endl;
        cin>>x>>y>>z;
    }
    void putdata()
    {
        ar=x*y*z;
        cout<<"Area is : "<<ar<<endl;
    }
    friend float area(int x,int y,int z);
};

float area()

{
    x*y*z;
}
int main()
{
	cout<<"Area is : "<<endl;
    Area aa;
    area.obj;
    obj.putdata(aa);
    return 0;
}
